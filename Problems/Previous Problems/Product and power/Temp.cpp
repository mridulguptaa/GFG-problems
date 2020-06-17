cin >> n >> k;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        int x = a[i];
        vector <int> b;
        for (int p = 2; p * p <= x; p++){
            if (x % p == 0){
                int cnt = 0;
                while (x % p == 0){
                    x /= p;
                    cnt++;
                }
                cnt %= k;
                if (cnt == 0){
                    continue;
                }
                b.pb(cnt);
                b.pb(p);
            }
        }
        if (x > 1){
            b.pb(1);
            b.pb(x);
        }
        vector <int> c = b;
        for (int i = 0; i < c.size(); i += 2){
            c[i] = k - c[i];
        }
        ans = ans + mp[c];
        mp[b]++;
    }
 
    cout << ans << endl;