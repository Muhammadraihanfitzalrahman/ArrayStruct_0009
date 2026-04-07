cout << "Data ke - 1 : " << datamu[0] << endl;
    cout << "Data ke - 2 : " << datamu[1] << endl;
    cout << "Data ke - 3 : " << datamu[2] << endl;
    cout << "Data ke - 4 : " << datamu[3] << endl;
    cout << "Data ke - 5 : " << datamu[4] << endl;

    cout << endl;

    // isi data dengan pengulangan for
    for (int i = 0; i <= 4; i++) 
    {
        cout << "Data Index ke - " << i << " : ";
        cin >> datamu[i];
    }

    cout << endl;

    // Menampilkan datamu dengan perulangan for
    for (int i = 0; i <= 4; i++) 
    {
        cout << "Data ke - " << i + 1 << " : " << datamu[i] << endl;
    }
}