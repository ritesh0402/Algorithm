class listcom():
    def compare(self,l1,l2):
        self.l1=l1
        self.l2=l2
        #print(len(self.l1),len(self.l2))     
        for i in self.l1:
            for j in self.l2:
                if(i>j):
                     return False
        return True             

    def merge(self,l1,l2):
        self.l1=l1
        self.l2=l2  
        l3=self.l1+self.l2  
        return l3  