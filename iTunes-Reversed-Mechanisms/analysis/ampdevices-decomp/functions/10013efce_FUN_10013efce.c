// name: FUN_10013efce
// address: 10013efce

void FUN_10013efce(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 local_30 [16];
  
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    lVar1 = FUN_100150dd2(param_2);
    *(long *)(param_1 + 0x18) = lVar1;
    if (lVar1 == 0) {
      FUN_1001b7b04(local_30,"");
    }
    else {
      FUN_1001515b0(local_30,param_2);
    }
    FUN_1001b80b2(param_1 + 0x20,local_30);
    FUN_1001b7a50(local_30);
  }
  std::mutex::unlock();
  return;
}

