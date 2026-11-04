// name: FUN_10063228c
// address: 10063228c

int FUN_10063228c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined4 local_24;
  
  local_24 = (undefined4)((ulong)in_RAX >> 0x20);
  iVar2 = 0;
  iVar1 = FUN_100631e82(param_1,"IOUSBDevice",0,0,param_2);
  if (iVar1 != 0) {
    iVar2 = FUN_100631e82(param_1,"IOUSBHostDevice",0,0,&local_24);
    if (iVar2 == 0) {
      iVar2 = FUN_1006322f0(local_24,param_2);
    }
  }
  return iVar2;
}

