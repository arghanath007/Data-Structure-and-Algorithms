# Solutions to the doubts

## Image 6 question

```c
    int main() {
        int a[]={1,5,7,0,2,0,4,8,0};
        int len= sizeof(a)/sizeof(int);
        // printf("%d",len);
        // int b[len];
        // int c[len];
        int result[len];
        int index=0;
        
        for(int i=0;i<len;i++)
        {
            if(a[i]==0)
            {
                result[index]=a[i];
                index++;
            }
        }
        for(int i=0;i<len;i++)
        {
            if(a[i]!=0)
            {
                result[index]=a[i];
                index++;
            }
        }
        for(int i=0;i<len;i++)
        {
            printf("%d\t", result[i]);
        }

        return 0;
    }
```