vector<int> rotateLeft(int d, vector<int> arr) {
    vector<int> temp;
    // store from after rotation
    for (int i = d; i < arr.size(); i++) 
        temp.push_back(arr[i]);
    // store from 0 to rotation
    for (int i = 0; i < d; i++)
        temp.push_back(arr[i]);
    return temp;
}