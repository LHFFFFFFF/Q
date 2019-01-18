#include <stdio.h>
#include<math.h>

struct student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};
struct student arr[100];

int index=0;
int main(){

    printf("xueshengchengjiguanlixitong\n");

    while(1){
        printf("1---tianjiaxueshengchengji\n");
        printf("2---shanchuxueshengchengji\n");
        printf("3---xianshisuoyouxueshengchengji\n");
        printf("4---yewui1:suoyouzongfenbujigedexuesheng(xiaoyu180)\n");
        printf("5---yewu2:meiyikedoubujigedexuesheng\n");
        printf("6---yewu3:xianshizongfenzuigaodexuesheng\n");
        printf("7---yewu4:xianshipingjunfenzuigao,qiemeiyoubujigekemudexuesheng\n");
        printf("8---tuichu\n");

        printf("qingxuanze:\n");

        int code;
        scanf("%d",&code);
        int sum = 0;

        if(code == 1){
            printf("qingshuruxueshengxingming:\n");
            scanf("%s",arr[index].name);

            printf("qingshuruxueshengyuwenchengji:\n");
            scanf("%d",&(arr[index].yuwen));

            printf("qingshuruxueshengshuxuechengji:\n");
            scanf("%d",&(arr[index].shuxue));

            printf("qingshuruxueshengyingyuchengji:\n");
            scanf("%d",&(arr[index].yingyu));

            index++;

            printf("tianjiachenggong,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code == 2)
        {
         if (index > 0)
         {
             index--;
             printf("shanchuchenggong,dianjihuichejixu\n");
             char x;
             scanf("%c",&x);
             scanf("%C",&x);
         }
         else
         {
             printf("wuxueshengxinxi,shanchushibai,dianjihuichejixu\n");
             char x;
             scanf("%c",&x);
             scanf("%C",&x);
         }
        }
        if(code == 3){
            printf("suoyouxueshengchengjiruxia:\n");

            for(int i = 0;i < index; i++)
            {
                printf("di%dgexueshengdexingmingwei%s,ywcjw:%d,sxcjw:%d,yycjw:%d\n",i+1,arr[i].name,arr[i].yuwen,arr[i].shuxue,arr[i].yingyu);
            }
            printf("\ndianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%C",&x);
        }
        if(code == 4){
            for(int i = 0;i < index; i++)
            {
                int sum = 0;
                sum=arr[i].yuwen+arr[i].shuxue+arr[i].yingyu;

                if(sum<180)
                {
                    printf("di%dmingxuesheng%schengjibujige\n",i+1,arr[i].name);
                }
            }
            printf("shaixuanwancheng,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code == 5){
            for (int i = 0; i < index; i++)
            {
                if(arr[i].yuwen < 60 && arr[i].shuxue < 60 && arr[i].yingyu < 60)
                {
                    printf("di%dmingxuesheng%sdemeiyikebujige\n", i + 1, arr[i].name);
                }
            }
            printf("shaixuanwancheng,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code == 6){
            int max = 0;
            int ID;

            for(int i = 0;i < index; i++)
            {
                if(max < sum)
                {
                    max = sum;
                }
                ID = i + 1;
            }
            printf("di%dmingxuesheng%sdezongchengjizuigao,zuigaowei%d\n",ID,arr[index].name,max);
            printf("shaixuanwancheng,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code == 7)
        {
            double aver;
            double pingjun = 0;
            int IDD = 0;

            for (int i = 0; i < index; i++)
            {
                aver = (arr[i].yuwen + arr[i].shuxue + arr[i].yingyu) / 3;

                if(pingjun < aver)
                {
                    pingjun = aver;
                    IDD = i + 1;
                }
            }
            printf("di%dmingxuesheng%sdepingjunchengjizuigao,zuigaowei%lf\n",IDD, arr[IDD - 1].name, pingjun);
            printf("shaixuanwancheng,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code == 8){
            printf("yuichuxitong\n");
            break;
        }
    }

    return 0;

}