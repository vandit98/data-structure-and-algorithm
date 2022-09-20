print('ola')
class Linkedlist:
    def __init__(self,data):
        self.data=data
        self.next=None
# making a linkedlist for mech

head_mech=Linkedlist({'regd_no':'4001','name':'QQQ','branch':'Mech','marks':'92'})
temp_mexh=head_mech

temp_mexh.next=Linkedlist({'regd_no':'4002','name':'RRR','branch':'Mech','marks':'89'})
temp_mexh=temp_mexh.next
temp_mexh.next=Linkedlist({'regd_no':'4003','name':'SSS','branch':'Mech','marks':'95'})
temp_mexh=temp_mexh.next
temp_mexh.next=Linkedlist({'regd_no':'4004','name':'TTT','branch':'Mech','marks':'66'})
temp_mexh=temp_mexh.next
temp_mexh.next=Linkedlist({'regd_no':'4005','name':'UUU','branch':'Mech','marks':'66'})
temp_mexh=temp_mexh.next
temp_mexh=head_mech
while(temp_mexh):
    print(temp_mexh.data)
    temp_mexh=temp_mexh.next
print("-----------------------------------------")
# making a linkedlist for ece

head_cse=Linkedlist({'regd_no':'1001','name':'AAA','branch':'cse','marks':'94'})
temp_cse=head_cse

temp_cse.next=Linkedlist({'regd_no':'1002','name':'BBB','branch':'cse','marks':'91'})
temp_cse=temp_cse.next
temp_cse.next=Linkedlist({'regd_no':'1003','name':'CCC','branch':'cse','marks':'75'})
temp_cse=temp_cse.next
temp_cse.next=Linkedlist({'regd_no':'1004','name':'DDD','branch':'cse','marks':'89'})
temp_cse=temp_cse.next
temp_cse.next=Linkedlist({'regd_no':'1005','name':'EEE','branch':'cse','marks':'69'})
temp_cse=temp_cse.next
temp_cse=head_cse
while(temp_cse):
    print(temp_cse.data)
    temp_cse=temp_cse.next
print("------------------------------------")
# making a linkedlist for mech

head_eee=Linkedlist({'regd_no':'3001','name':'KKK','branch':'eee','marks':'72'})
temp_eee=head_eee

temp_eee.next=Linkedlist({'regd_no':'3002','name':'LLL','branch':'eee','marks':'89'})
temp_eee=temp_eee.next
temp_eee.next=Linkedlist({'regd_no':'3003','name':'MMM','branch':'eee','marks':'75'})
temp_eee=temp_eee.next
temp_eee.next=Linkedlist({'regd_no':'3004','name':'NNN','branch':'eee','marks':'76'})
temp_eee=temp_eee.next
temp_eee.next=Linkedlist({'regd_no':'3005','name':'OOO','branch':'eee','marks':'58'})
temp_eee=temp_eee.next
temp_eee=head_eee
while(temp_eee):
    print(temp_eee.data)
    temp_eee=temp_eee.next
print("--------------------------------------------")
# making a linkedlist for eee

head_ece=Linkedlist({'regd_no':'2001','name':'FFF','branch':'eee','marks':'72'})
temp_ece=head_ece
temp_ece.next=Linkedlist({'regd_no':'2002','name':'GGG','branch':'eee','marks':'89'})
temp_ece=temp_ece.next
temp_ece.next=Linkedlist({'regd_no':'2003','name':'HHH','branch':'eee','marks':'75'})
temp_ece=temp_ece.next
temp_ece.next=Linkedlist({'regd_no':'2004','name':'III','branch':'eee','marks':'76'})
temp_ece=temp_ece.next
temp_ece.next=Linkedlist({'regd_no':'2005','name':'JJJ','branch':'eee','marks':'58'})
temp_ece=temp_ece.next
temp_ece=head_ece
while(temp_ece):
    print(temp_ece.data)
    temp_ece=temp_ece.next
print("--------------------------------------------")
# making a linkedlist for shortlysted student

head_final=Linkedlist({'regd_no':'4003','name':'SSS','branch':'mech','marks':'95'})
temp_final=head_final
temp_final.next=Linkedlist({'regd_no':'3001','name':'KKK','branch':'eee','marks':'91'})
temp_final=temp_final.next
temp_final.next=Linkedlist({'regd_no':'4001','name':'QQQ','branch':'mech','marks':'92'})
temp_final=temp_final.next
temp_final.next=Linkedlist({'regd_no':'3002','name':'LLL','branch':'eee','marks':'89'})
temp_final=temp_final.next
temp_final.next=Linkedlist({'regd_no':'4001','name':'QQQ','branch':'mech','marks':'92'})
temp_final=temp_final.next
temp_final=head_final
while(temp_final):
    print(temp_final.data)
    temp_final=temp_final.next
print("----------------------------------------------",)

# adding the mechanical topper at end of cse
temp_cse=head_cse
while(temp_cse.next):
    temp_cse=temp_cse.next
temp_cse.next=head_mech
temp_cse=head_cse
while(temp_cse):
    print(temp_cse.data)
    temp_cse=temp_cse.next
print("-----------------------------------")
# adding the eee topper at beggning of cse
# or we can say add cse at end of eee
temp_eee=head_eee

while(temp_eee.next):
    temp_eee=temp_eee.next
temp_eee.next=head_cse
temp_eee=head_eee
while(temp_eee):
    print(temp_eee.data)
    temp_eee=temp_eee.next
print("----------------------------------------------------")
# making cse as independent circular list
temp_cse=head_cse
# print("temp_cse is",temp_cse.data)
# print("head_cse is ",head_cse.data)
count=4
while(count):
    count-=1
    temp_cse=temp_cse.next
print("temp_cse is",temp_cse.data)

temp_cse.next=head_cse
temp_cse=temp_cse.next
while(temp_cse.next!=head_cse):
    temp_cse=temp_cse.next
    print(temp_cse.data)
    # count-=1
print("-------------------------------------------")
# making eece a circular list
count=4
temp_ece=head_ece
# print("temp",temp_ece.data)
while(count):
    count-=1
    temp_ece=temp_ece.next

print("temp",temp_ece.data)
print("-----------------------")
temp_ece.next=head_ece
# temp_ece=temp_ece.next

while(temp_ece.next!=head_ece):
    temp_ece=temp_ece.next
    print(temp_ece.data)
print("-----------------------------------")