#include<stdio.h>
char *qipan[15][15];
void huizhiqipan(){
        for(int c = 1;c<=9;c++){
                printf("%d",c);
        }
        printf("%d",0);
        for(int d = 1;d<=5;d++){
                printf("%d",d);
        }
        printf("\n");
        for(int a = 0;a<=14;a++){
                for(int b = 0;b <=14;b++){
                        printf("%s",qipan[a][b]);
                }
                printf("%d\n",a+1);
        }
}
void caozuo_white(int a,int b){
        qipan[a][b] = "●";
}
void caozuo_black(int a,int b){
        qipan[a][b] = "○";
}
int xie_jiance(char *qipan[15][15]){
        int sum = 0;
        int end = 0;
        for(int a = 0;a<=14;a++){
                        int c = a;
                        int d = 0;
                        for(c,d;c<=14&&d<=14;c++,d++){
                                if(qipan[c][d] == "●"){
                                        sum++;
                                }
                                else{
                                        sum = 0;
                                }
                                if(sum == 5){
                                        end = 1;
                                        break;
                                }
                        }
                        c = a;
                        d = 0;
                        for(c,d;c<=14&&d<=14;c++,d++){
                                if(qipan[d][c] == "●"){
                                        sum++;
                                }
                                else{
                                        sum = 0;
                                }
                                if(sum == 5){
                                        end = 1;
                                        break;
                                }
                        }
        }
        for(int a = 0;a<=14;a++){
                        int c = a;
                        int d = 0;
                        for(c,d;c<=14&&d<=14;c++,d++){
                                if(qipan[c][d] == "○"){
                                        sum++;
                                }
                                else{
                                        sum = 0;
                                }
                                if(sum == 5){
                                        end = -1;
                                        break;
                                }
                        }
                        c = a;
                        d = 0;
                        for(c,d;c<=14&&d<=14;c++,d++){
                                if(qipan[d][c] == "○"){
                                        sum++;
                                }
                                else{
                                        sum = 0;
                                }
                                if(sum == 5){
                                        end = 1;
                                        break;
                                }
                        }
        }
        for(int a = 0;a<=14;a++){
                        int c = a;
                        int d = 0;
                        for(c,d;c>=0&&d<=14;c--,d++){
                                if(qipan[c][d] == "●"){
                                        sum++;
                                }
                                else{
                                        sum = 0;
                                }
                                if(sum == 5){
                                        end = 1;
                                        break;
                                }
                        }
                        c = a;
                        d = 14;
                        for(c,d;c<=14&&d>=0;c++,d--){
                                if(qipan[d][c] == "●"){
                                        sum++;
                                }
                                else{
                                        sum = 0;
                                }
                                if(sum == 5){
                                        end = 1;
                                        break;
                                }
                        }
        }
        for(int a = 0;a<=14;a++){
                        int c = a;
                        int d = 0;
                        for(c,d;c>=0&&d<=14;c--,d++){
                                if(qipan[c][d] == "○"){
                                        sum++;
                                }
                                else{
                                        sum = 0;
                                }
                                if(sum == 5){
                                        end = -1;
                                        break;
                                }
                        }
                        c = a;
                        d = 14;
                        for(c,d;c<=14&&d>=0;c++,d--){
                                if(qipan[d][c] == "○"){
                                        sum++;
                                }
                                else{
                                        sum = 0;
                                }
                                if(sum == 5){
                                        end = 1;
                                        break;
                                }
                        }
        }
        return end;
}
int hengshu_jiance(char *qipan[15][15]){
        int sum = 0;
        int end = 0;
        for(int a = 0;a<=14;a++){
                sum = 0;
                for(int b = 0;b<=14;b++){
                        if(qipan[a][b] == "●"){
                                sum++;
                        }
                        else{
                                sum = 0;
                        }
                        if(sum == 5){
                                end = 1;
                                break;
                        }
                }
        }
        for(int a = 0;a<=14;a++){
                sum = 0;
                for(int b = 0;b<=14;b++){
                        if(qipan[a][b] == "○"){
                                sum++;
                        }
                        else{
                                sum = 0;
                        }
                        if(sum == 5){
                                end = -1;
                                break;
                        }
                }
        }
        for(int a=0;a<=14;a++){
                sum = 0;
                for(int b=0;b<=14;b++){
                        if(qipan[b][a] == "●"){
                                sum++;
                        }
                        else{
                                sum = 0;
                        }
                        if(sum == 5){
                                end = 1;
                                break;
                        }
                }
        }
        for(int a=0;a<=14;a++){
                sum = 0;
                for(int b=0;b<=14;b++){
                        if(qipan[b][a] == "○"){
                                sum++;
                        }
                        else{
                                sum = 0;
                        }
                        if(sum == 5){
                                end = -1;
                                break;
                        }
                }
        }
        return end;
}
int fenshu(int count){
        if(count == 0){
                return 1;
        }
        if(count == 1){
                return 2;
        }
        if(count == 2){
                return 20;
        }
        if(count == 3){
                return 200;
        }
        if(count ==4){
                return 20000;
        }
}
int white_fenshu(int count){
        if(count == 0){
                return 0;
        }
        if(count == 1){
                return 1;
        }
        if(count == 2){
                return 10;
        }
        if(count == 3){
                return 100;
        }
        if(count ==4){
                return 10000;
        }
}
int fen(int a,int b){
        int sum = 0;
        int count = 0;
        int temp = 0;
                int c = a;
                int d = b;
                        for(c,d;c<=14&&d<=14;c++,d++){
                                if(qipan[c+1][d+1] == "●"){
                                        count++;
                                }
                                else{
                                        break;
                                }
                        }
                        temp = fenshu(count);
                        sum = sum + temp;
                        count = 0;
                        //↘
                        c=a;
                        d=b;
                        for(d;d<=14;d++){
                                if(qipan[c][d+1] == "●"){
                                        count++;
                                }
                                else{
                                        break;
                                }
                        }
                        temp = fenshu(count);
                        sum = sum + temp;
                        count = 0;
                        //↓
                        c=a;
                        d=b;
                        for(c,d;c<=14&&d>=0;c++,d--){
                                if(qipan[c+1][d-1] == "●"){
                                        count++;
                                }
                                else{
                                        break;
                                }
                        }
                        temp = fenshu(count);
                        sum = sum + temp;
                        count = 0;
                        //↙
                        c=a;
                        d=b;
                        for(d;d>=0;d--){
                                if(qipan[c][d-1] == "●"){
                                        count++;
                                }
                                else{
                                        break;
                                }
                        }
                        temp = fenshu(count);
                        sum = sum + temp;
                        count = 0;
                        //←
                        c=a;
                        d=b;
                        for(c,d;c>=0&&d>=0;d--,c--){
                                if(qipan[c-1][d-1] == "●"){
                                        count++;
                                }
                                else{
                                        break;
                                }
                        }
                        temp = fenshu(count);
                        sum = sum + temp;
                        count = 0;
                        //↖
                        c=a;
                        d=b;
                        for(c;c>=0;c--){
                                if(qipan[c-1][d] == "●"){
                                        count++;
                                }
                                else{
                                        break;
                                }
                        }
                        temp = fenshu(count);
                        sum = sum + temp;
                        count = 0;
                        //↑
                        c=a;
                        d=b;
                        for(c,d;c>=0&&d<=14;c--,d++){
                                if(qipan[c-1][d+1] == "●"){
                                        count++;
                                }
                                else{
                                        break;
                                }
                        }
                        temp = fenshu(count);
                        sum = sum + temp;
                        count = 0;
                        //↗
                        c=a;
                        d=b;
                        for(d;d<=14;d++){
                                if(qipan[c][d+1] == "●"){
                                        count++;
                                }
                                else{
                                        break;
                                }
                        }
                        temp = fenshu(count);
                        sum = sum + temp;
                        count = 0;
                        //→
                        for(c,d;c<=14&&d<=14;c++,d++){
                                if(qipan[c+1][d+1] == "○"){
                                        count++;
                                }
                                else{
                                        break;
                                }
                        }
                        temp = white_fenshu(count);
                        sum = sum + temp;
                        count = 0;
                        //↘
                        c=a;
                        d=b;
                        for(d;d<=14;d++){
                                if(qipan[c][d+1] == "○"){
                                        count++;
                                }
                                else{
                                        break;
                                }
                        }
                        temp = white_fenshu(count);
                        sum = sum + temp;
                        count = 0;
                        //↓
                        c=a;
                        d=b;
                        for(c,d;c<=14&&d>=0;c++,d--){
                                if(qipan[c+1][d-1] == "○"){
                                        count++;
                                }
                                else{
                                        break;
                                }
                        }
                        temp = white_fenshu(count);
                        sum = sum + temp;
                        count = 0;
                        //↙
                        c=a;
                        d=b;
                        for(d;d>=0;d--){
                                if(qipan[c][d-1] == "○"){
                                        count++;
                                }
                                else{
                                        break;
                                }
                        }
                        temp = white_fenshu(count);
                        sum = sum + temp;
                        count = 0;
                        //←
                        c=a;
                        d=b;
                        for(c,d;c>=0&&d>=0;d--,c--){
                                if(qipan[c-1][d-1] == "○"){
                                        count++;
                                }
                                else{
                                        break;
                                }
                        }
                        temp = white_fenshu(count);
                        sum = sum + temp;
                        count = 0;
                        //↖
                        c=a;
                        d=b;
                        for(c;c>=0;c--){
                                if(qipan[c-1][d] == "○"){
                                        count++;
                                }
                                else{
                                        break;
                                }
                        }
                        temp = white_fenshu(count);
                        sum = sum + temp;
                        count = 0;
                        //↑
                        c=a;
                        d=b;
                        for(c,d;c>=0&&d<=14;c--,d++){
                                if(qipan[c-1][d+1] == "○"){
                                        count++;
                                }
                                else{
                                        break;
                                }
                        }
                        temp = white_fenshu(count);
                        sum = sum + temp;
                        count = 0;
                        //↗
                        c=a;
                        d=b;
                        for(d;d<=14;d++){
                                if(qipan[c][d+1] == "○"){
                                        count++;
                                }
                                else{
                                        break;
                                }
                        }
                        temp = white_fenshu(count);
                        sum = sum + temp;
                        count = 0;
                        //→
                        printf("%d\n",sum);
                        return sum;
}
void renji(){
        int point = -1;
        int c = 0;
        int d = 0;
        for(int a = 0;a<=14;a++){
                for(int b = 0;b<=14;b++){
                        int sum = fen(a,b);
                        if((qipan[a][b] == "●")||(qipan[a][b] == "○")){
                               continue;
                        }
                        else{
                                if(point < sum){
                                        point = sum;
                                        c = a;
                                        d = b;
                                        //printf("%d\n",point);
                                }
                        }
                }
        }
        qipan[c][d] = "○";
}
/*int jiance(char *qipan[15][15]){
        int end;
        end = hengshu_jiance(qipan);
        end = xie_jiance(qipan);
        return end;
}*/
int main(){
qipan[0][0] = "┌";
qipan[0][14] = "┐";
qipan[14][0] = "└";
qipan[14][14] = "┘";
for(int a = 0;a<=14;a++){
        for(int b = 0;b<=14;b++){
                if(a==0&&b!=0&&b!=14){
                        qipan[a][b] = "┬";
                }
                if(b==0&&a!=0&&a!=14){
                        qipan[a][b] = "├";
                }
                if(a==14&&b!=0&&b!=14){
                        qipan[a][b] = "┴";
                }
                if(b==14&&a!=0&&a!=14){
                        qipan[a][b] = "┤";
                }
                if(a!=0&&a!=14&&b!=0&&b!=14){
                        qipan[a][b] = "┼";
                }
                }
        }
        //初始化棋盘
        //
        int start;
        int hang;
        int lie;
        printf("神秘c语言五子棋游戏\n扣1开始激情双人对战模式\n扣2和神秘人机进行巅峰对决\n扣任意数字退出游戏\n");
        scanf("%d",&start);
        if(start == 1){
                printf("欢迎支持我们的游戏喵\n");
                huizhiqipan();
                for(start;start ==1;start = start){
                        printf("白棋落子\n");
                        for(start;start == 1;start){
                        for(start;start == 1;start){
                        printf("请输入你想要下的行数\n");
                        scanf("%d",&hang);
                        if(hang <=15&&hang>=1){
                                break;
                        }
                        else{
                                printf("请输入一个在1-15之间的整数\n");
                        }
                        }
                        for(start;start == 1;start){
                        printf("请输入你想要下的列数\n");
                        scanf("%d",&lie);
                        if(lie<=15&&lie>=1){
                                break;
                        }
                        else{
                                printf("请输入一个在1-15之间的整数\n");
                        }
                        }
                        if(qipan[hang-1][lie-1] != "●"&& qipan[hang-1][lie-1] != "○"){
                                break;
                        }
                        else{
                                printf("我服了，不能让棋子叠罗汉吧？\n");
                        }
                        }
                        caozuo_white(hang-1,lie-1);
                        huizhiqipan();
                        int end1 = hengshu_jiance(qipan);
                        int end2 = xie_jiance(qipan);
                        if(end1 ==1||end2 == 1){
                                printf("white win\n");
                                break;
                        }
                        printf("黑棋落子\n");
                        for(start;start == 1;start){
                        for(start;start == 1;start){
                        printf("请输入你想要下的行数\n");
                        scanf("%d",&hang);
                        if(hang<=15&&hang>=1){
                                break;
                        }
                        else{
                                printf("请输入一个在1-15之间的整数\n");
                        }
                        }
                        for(start;start == 1;start){
                        printf("请输入你想要下的列数\n");
                        scanf("%d",&lie);
                        if(lie>=1&&lie<=15){
                                break;
                        }
                        else{
                                printf("请输入一个在1-15之间的整数\n");
                        }
                        }
                        if(qipan[hang-1][lie-1] != "●" &&qipan[hang-1][lie-1] != "○"){
                                break;
                        }
                        else{
                                printf("我服了，能不能别扒拉人家棋子\n");
                        }
                        }
                        caozuo_black(hang-1,lie-1);
                        huizhiqipan();
                        end1 = hengshu_jiance(qipan);
                        end2 = xie_jiance(qipan);
                        if(end1 == -1||end2 == -1){
                                printf("black win\n");
                                break;
                        }
                }
        }
        if(start == 2){
                printf("欢迎来到超强人机挑战赛！\nYou first\n");
                huizhiqipan();
                for(start;start = 2;start){
                        printf("白棋落子\n");
                        for(start;start == 2;start){
                        for(start;start == 2;start){
                        printf("请输入你想要下的行数\n");
                        scanf("%d",&hang);
                        if(hang <=15&&hang>=1){
                                break;
                        }
                        else{
                                printf("请输入一个1-15之间的整数\n");
                        }
                        }
                        for(start;start == 2;start){
                        printf("请输入你想要下的列数\n");
                        scanf("%d",&lie);
                        if(lie<=15&&lie>=1){
                                break;
                        }
                        else{
                                printf("请输入一个1-15之间的整数\n");
                        }
                        }
                        if(qipan[hang-1][lie-1] != "●"&& qipan[hang-1][lie-1] != "○"){
                                break;
                        }
                        else{
                                printf("别下别人棋上\n");
                        }
                        }
                        caozuo_white(hang-1,lie-1);
                        huizhiqipan();
                        int end1 = hengshu_jiance(qipan);
                        int end2 = xie_jiance(qipan);
                        if(end1 ==1||end2 == 1){
                                printf("U win\n");
                                break;
                        }
                        renji();
                        huizhiqipan();
                        end1 = hengshu_jiance(qipan);
                        end2 = xie_jiance(qipan);
                        if(end1 == -1||end2 == -1){
                                printf("black win\n");
                                break;
                        }
                }
        }
        else{
                printf("欢迎下次光临\n");
        }
}
