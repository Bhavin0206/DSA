class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> receiveMails;

        for(int i=0;i<emails.size();i++){
            string addWords="";
             int at=emails[i].find('@');
            for(int j=0;j<emails[i].size();j++){
                if(emails[i][j]=='.' && j<at){
                    continue;
                }
                if(emails[i][j]=='+' && j<at){
                    j=at;
                }
                addWords+=emails[i][j];
            }
            receiveMails.insert(addWords);
        }
            return receiveMails.size();



        // for (int i = 0; i < emails.size(); i++) {
        //     string addWords = "";
        //     int at = emails[i].find('@');

        //     for (int j = 0; j < emails[i].size(); j++) {

        //         if (emails[i][j] == '.' && j < at) {
        //             continue;
        //         }

        //         if (emails[i][j] == '+' && j < at) {
        //             j = at;
        //         }

        //         addWords += emails[i][j];
        //     }

        //     receiveMails.insert(addWords);
        // }

        // return receiveMails.size();
    }
};