// name: FUN_100419732
// address: 100419732

void FUN_100419732(long param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  bool bVar2;
  
  if ((param_2 == 0x69706d64) && (*(int *)(param_1 + 0x80) == param_3)) {
    if (param_4 == 0) {
      bVar2 = false;
    }
    else {
      iVar1 = _AMDeviceGetInterfaceType(param_4);
      bVar2 = iVar1 == 2;
    }
    *(bool *)(param_1 + 0x5e) = bVar2;
  }
  return;
}

