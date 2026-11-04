// name: FUN_100368631
// address: 100368631

void FUN_100368631(void)

{
  cfstringStruct *local_30;
  
  local_30 = &cf_click;
  FUN_1001a8c1c(&DAT_1008bdda0,&local_30);
  ___cxa_atexit(FUN_1001ab006,&DAT_1008bdda0,0x100000000);
  local_30 = &cf_search;
  FUN_1001a8c1c(&DAT_1008bdda8,&local_30);
  ___cxa_atexit(FUN_1001ab006,&DAT_1008bdda8,0x100000000);
  local_30 = &cf_nowPlaying;
  FUN_1001a8c1c(&DAT_1008bddb0,&local_30);
  ___cxa_atexit(FUN_1001ab006,&DAT_1008bddb0,0x100000000);
  local_30 = &cf_madeForYou;
  FUN_1001a8c1c(&DAT_1008bddb8,&local_30);
  ___cxa_atexit(FUN_1001ab006,&DAT_1008bddb8,0x100000000);
  local_30 = &cf_addDownload;
  FUN_1001a8c1c(&DAT_1008bddc0,&local_30);
  ___cxa_atexit(FUN_1001ab006,&DAT_1008bddc0,0x100000000);
  return;
}

