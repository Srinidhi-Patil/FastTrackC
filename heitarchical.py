#Hierarchical Clustering
#Import mall data

library(readr)
mall <- read.csv("~/K_Means/mall.csv")
View(mall)
X <- mall[4:5]
View(X)

#Using the dendrogram to find optimal number of clusters

dendrogram <- hclust(dist(X, method = "euclidean"), method = "ward.D")
plot(dendrogram,
main = paste('Dendrogram'),
xlab = 'Customers',
ylab = 'Euclidean Distance')

hc <- hclust(dist(X, method = "euclidean"), method = "ward.D")
y_hc = cutree(hc, 5)


library(cluster)
clusplot(X,
y_hc,
lines = 0,
shade = TRUE,
color = TRUE,
labels = 2,
plotchar = FALSE,
span = TRUE,
main = paste(‘Cluster of clients'),
xlab = “Annual income",
ylab = “Spending score")
