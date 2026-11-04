// name: FUN_100353471
// address: 100353471

void FUN_100353471(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 local_58 [40];
  long local_30;
  undefined2 local_22;
  
  FUN_1001c62d9(local_58,0x30);
  FUN_1001c62d9(&local_22,2);
  local_22 = 0;
  lVar1 = FUN_100352c96(param_2,&local_22,0);
  if (lVar1 == 0) {
    FUN_10035354b(param_1,local_58);
  }
  else if (local_30 == 0) {
    _memcpy((void *)(param_1 + 0x20),(void *)(lVar1 + 0x20),0xaf4);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(lVar1 + 0x1c);
    *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(lVar1 + 0x1d);
  }
  else {
    lVar2 = FUN_100351d04((void *)(lVar1 + 0x20),0x82);
    FUN_10035354b(param_1,local_58);
    if (lVar2 != 0) {
      FUN_100351ae9(param_1 + 0x20,0x82,2,0);
    }
  }
  FUN_100352999(lVar1);
  return;
}

