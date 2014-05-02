vector<vector<int> > unordered_partitions(int N, int p) {
  if (p == 1) {
    vector<int> singleton; 
    vector<vector<int> > ret;
    singleton.push_back(N);
    ret.push_back(singleton);
    return ret;
  } else {
    vector<vector<int> > ret;
    for (int i=0; i<=N; i++) {
      vector<vector<int> > solutions = unordered_partitions(N - i, p - 1);
      for (int j=0; j<solutions.size(); j++) {
        solutions[j].push_back(i);
        ret.push_back(solutions[j]);
      }
    }
    return ret;
  }
}
