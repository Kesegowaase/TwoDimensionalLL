double mAverage = 0.0;
int counternine = 0;
int countereight = 0;
int counterseven = 0;
int countersix = 0;

struct nodeClass
{
	int classID;
	double classMidtermAverage;
	struct nodeClass *next;
	struct nodeStudent *studentPtr;
};

struct nodeStudent
{
	int studentID;
	int midterm;
	struct nodeStudent *next;
};

    
void insert(struct nodeClass **head,int studentID,int midterm){
    
    if((*head) == NULL){
        (*head) = (struct nodeClass*)malloc(sizeof(struct nodeClass));
        (*head) -> next = NULL;
        struct nodeClass *iter = (struct nodeClass*)malloc(sizeof(struct nodeClass));
        iter = (*head);
        iter -> classID = 1;
        for(int i =2 ;i<5;i++){
            struct nodeClass *temp = (struct nodeClass*)malloc(sizeof(struct nodeClass));
            temp -> next = NULL;
            temp -> studentPtr = NULL;
            temp -> classID = i;
            iter -> next = temp;
            iter = iter -> next;
        }
    }
    
        
    
    if(66 == (studentID/1000)){
        countersix++;
        struct nodeStudent **stuptr = &(*head) -> studentPtr;
        while((*stuptr) != NULL){
            
            stuptr=&((*stuptr)->next);
            
        }
        (*stuptr) = (struct nodeStudent* )malloc(sizeof(struct nodeStudent));
        (*stuptr)->next = NULL;
        (*stuptr)->studentID=studentID;
        (*stuptr)->midterm=midterm;
        
    }
    
    if(77 == studentID/1000){
        counterseven++;
         struct nodeStudent **stuptr = &(*head) -> next -> studentPtr ;
        while((*stuptr) != NULL){
            
            stuptr=&((*stuptr)->next);
            
        }
        (*stuptr) = (struct nodeStudent* )malloc(sizeof(struct nodeStudent));
        (*stuptr)->next = NULL;
        (*stuptr)->studentID=studentID;
        (*stuptr)->midterm=midterm;
         
    }

    if(88 == studentID/1000){
        countereight++;
        struct nodeStudent **stuptr = &(*head) -> next -> next -> studentPtr ;
        while((*stuptr) != NULL){
            
            stuptr=&((*stuptr)->next);
            
        }
        (*stuptr) = (struct nodeStudent* )malloc(sizeof(struct nodeStudent));
        (*stuptr)->next = NULL;
        (*stuptr)->studentID=studentID;
        (*stuptr)->midterm=midterm;
         
    }
    if(99 == studentID/1000){
        counternine++;
         struct nodeStudent **stuptr = &(*head) -> next -> next -> next ->studentPtr ;
        while((*stuptr) != NULL){
            
            stuptr=&((*stuptr)->next);
            
        }
        (*stuptr) = (struct nodeStudent* )malloc(sizeof(struct nodeStudent));
        (*stuptr)->next = NULL;
        (*stuptr)->studentID=studentID;
        (*stuptr)->midterm=midterm;
    }

    
}


void computeClassAverage(struct nodeClass *head){
    
    struct nodeClass *iter = (struct nodeClass*) malloc(sizeof(struct nodeClass));
    iter = head;
    struct nodeStudent *av = (struct nodeStudent*) malloc(sizeof(struct nodeStudent));
    av = iter -> studentPtr;
    
    for(int i =0 ;i< countersix ;i ++){
        for(int j=0;j< countersix-1 ; j++){
            
            if((av -> midterm) < (av -> next -> midterm)){
                int temp = av -> midterm;
                int temp2 = av -> studentID;
                av -> midterm = av -> next -> midterm;
                av -> studentID = av -> next ->studentID;
                av -> next -> midterm = temp;
                av -> next ->studentID = temp2;
            }
            else if((av -> midterm) == (av -> next -> midterm)){
                
                if((av -> studentID) > (av -> next -> midterm)){
                    
                    int temp = av -> midterm;
                int temp2 = av -> studentID;
                av -> midterm = av -> next -> midterm;
                av -> studentID = av -> next ->studentID;
                av -> next -> midterm = temp;
                av -> next ->studentID = temp2;
                    
                }
                
            }
            av = av -> next;
        }
        av = iter -> studentPtr;
    }
    av = iter -> next ->studentPtr;
    for(int i =0 ;i< counterseven ;i ++){
        for(int j=0;j< counterseven-1 ; j++){
            
            if(av -> midterm < av -> next -> midterm){
                int temp = av -> midterm;
                int temp2 = av -> studentID;
                av -> midterm = av -> next -> midterm;
                av -> studentID = av -> next ->studentID;
                av -> next -> midterm = temp;
                av -> next ->studentID = temp2;
            }
            else if((av -> midterm) == (av -> next -> midterm)){
                
                if((av -> studentID) > (av -> next -> midterm)){
                    
                    int temp = av -> midterm;
                int temp2 = av -> studentID;
                av -> midterm = av -> next -> midterm;
                av -> studentID = av -> next ->studentID;
                av -> next -> midterm = temp;
                av -> next ->studentID = temp2;
                    
                }
                
            }
            av = av -> next;
        }
        av = iter -> next ->studentPtr;
    }
    av = iter -> next -> next ->studentPtr;
    for(int i =0 ;i< countereight ;i ++){
        for(int j=0;j< countereight-1 ; j++){
            
            if(av -> midterm < av -> next -> midterm){
                int temp = av -> midterm;
                int temp2 = av -> studentID;
                av -> midterm = av -> next -> midterm;
                av -> studentID = av -> next ->studentID;
                av -> next -> midterm = temp;
                av -> next ->studentID = temp2;
            }
            else if((av -> midterm) == (av -> next -> midterm)){
                
                if((av -> studentID) > (av -> next -> midterm)){
                    
                    int temp = av -> midterm;
                int temp2 = av -> studentID;
                av -> midterm = av -> next -> midterm;
                av -> studentID = av -> next ->studentID;
                av -> next -> midterm = temp;
                av -> next ->studentID = temp2;
                    
                }
                
            }
            av = av -> next;
        }
        av = iter -> next -> next ->studentPtr;
    }
    av = iter -> next ->next -> next ->studentPtr;
    for(int i =0 ;i< counternine ;i ++){
        for(int j=0;j< counternine-1 ; j++){
            
            if(av -> midterm < av -> next -> midterm){
                int temp = av -> midterm;
                int temp2 = av -> studentID;
                av -> midterm = av -> next -> midterm;
                av -> studentID = av -> next ->studentID;
                av -> next -> midterm = temp;
                av -> next ->studentID = temp2;
            }
            else if((av -> midterm) == (av -> next -> midterm)){
                
                if((av -> studentID) > (av -> next -> midterm)){
                    
                    int temp = av -> midterm;
                int temp2 = av -> studentID;
                av -> midterm = av -> next -> midterm;
                av -> studentID = av -> next ->studentID;
                av -> next -> midterm = temp;
                av -> next ->studentID = temp2;
                    
                }
                
            }
            av = av -> next;
        }
        av = iter -> next ->next -> next ->studentPtr;
    }
    
av = iter -> studentPtr;
   
    for(int i = 0 ; i < 4 ; i++){
        int counter = 0;
        while(av != NULL){
            
            mAverage += av -> midterm;
            av = av -> next;
            counter ++;
        }
        iter -> classMidtermAverage = (mAverage / counter);
        mAverage = 0.0;
        if(i == 3)
            continue;
        iter = iter -> next;
        av = iter -> studentPtr;
    }
}

void printAll(struct nodeClass *head){
    
    struct nodeClass *iter = (struct nodeClass*)malloc(sizeof(struct nodeClass));
    iter = head;
    struct nodeStudent *iterS = (struct nodeStudent*)malloc(sizeof(struct nodeStudent));
    iterS = iter -> studentPtr;
    
    for(int i =0 ;i< 4 ;i++){
        printf("%d %.2f\n",iter -> classID,iter -> classMidtermAverage);
        while(iterS != NULL){
            
            printf("%d %d\n",iterS -> studentID,iterS -> midterm);
            iterS = iterS -> next;
        }
        if(i == 3)
            continue;
    iter = iter -> next;
    iterS = iter -> studentPtr;
    }
    
}




