// name: FUN_100178093
// address: 100178093

void FUN_100178093(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined4 local_24;
  
  local_24 = (undefined4)((ulong)in_RAX >> 0x20);
  FUN_100177e94(param_1,&local_24);
  uVar1 = _CFTimeZoneCopyDefault();
  FUN_100178023(local_24,uVar1,param_2);
  FUN_10017060f(uVar1);
  return;
}

