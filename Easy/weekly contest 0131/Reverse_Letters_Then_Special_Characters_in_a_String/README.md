## 💡 Problem Analysis
Its give a string,which only contain lowercase letters and special characters,i have to reverse both,then place them back into the positions originally occupied by  lowercase/special characters.

## 🛠️ My Solution
First i create two temporary strings named a(for lowercase letters) and b(for special characters)
Then using a for loop to categorize characters into two strings based on their types
Reversed both of them,and then put them back into the positions originally occupied by themself.
And i use a erase() function to make sure the elements that already placed back into original function can not be in the temporary string

## ⏱️ Complexity
Time Complexity : O(n^2) 
Space Complexity : O(n)

## 🧠 What I have Learned
The usages of erase() and isalpha() and reverse()

## Improvment?
I can improve the time cpmplexity to O(n),erase() function will make every elements int the temporary stings have to shifting to the left,which cost O(n),and o(n)*O(n)->(for loop) which equals to o(n^2)

int ia = 0, ib = 0; // using post-increment pointers
for(int i = 0; i < s.size(); i++){
    if(isalpha(s[i])){
        s[i] = a[ia++]; // s[i] will first excute = a[i],and then a[i]++
    } else {
        s[i] = b[ib++]; // s[i] will first excute = b[i],and then b[i]++
    }
}

I have also learned 
a[ia++] is Post-increment
a[++ia]	isPre-increment
