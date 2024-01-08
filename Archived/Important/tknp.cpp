//tknp với mảng sắp xếp từ lớn đến bé 
int binarySearch(int x) 
{
   int l = 1;//đầu mảng
   int r = tong2.size() - 1;//cuối mảng
   while (l <= r) {
      int mid = l + (r - l) / 2;

      if (tong2[mid] == x)
         return mid;

      if (tong2[mid] < x)
         r = mid - 1;

      else
         l = mid + 1;
   }

   return -1;
}

//tknp kiểu thường
int binarySearch(vector<int> tong2, int x) {
   int l = 0;
   int r = tong2.size() - 1;

   while (l <= r) {
      int mid = l + (r - l) / 2;

      if (tong2[mid] == x)
         return mid;

      if (tong2[mid] < x)
         l = mid + 1;

      else
         r = mid - 1;
   }

   return -1; // Trả về -1 nếu không tìm thấy phần tử x trong mảng 
}

int binarySearch(vector<int> tong2, int x) {
    int l = 0;
    int r = tong2.size() - 1;
    int mid;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (tong2[mid] == x)
        return mid;
        if (tong2[mid] < x)
        l = mid + 1;
        else
        r = mid - 1;
        }
        return -1;
}