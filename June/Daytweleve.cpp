for (auto& p : matches) {
    int &x=p[0], &y=p[1];
    if (loss[x]==-1) {
        loss[x]=0;
        xmin=min(xmin, x);
        xmax=max(xmax, x);
    }
    if (loss[y]<=0){
        loss[y]=1;
        xmin=min(xmin, y);
        xmax=max(xmax ,y);
    }
    else loss[y]++;
}
