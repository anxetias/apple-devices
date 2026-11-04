// name: FUN_1005331ae
// address: 1005331ae

int FUN_1005331ae(int param_1,undefined8 param_2,void *param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 local_88 [80];
  undefined8 local_38;
  char local_29;
  
  FUN_1001b811c(param_4);
  if (param_1 == 0x80) {
    lVar2 = FUN_100588e6f();
    iVar5 = *(int *)(lVar2 + 0x430);
    if (iVar5 == 0) {
      if (param_3 != (void *)0x0) {
        _memcpy(param_3,(void *)(lVar2 + 0x438),0x420);
      }
      FUN_1001b8172(param_4,lVar2 + 0x8e8);
      iVar5 = 0;
    }
  }
  else {
    local_38 = 0;
    uVar3 = FUN_1002794b5();
    uVar4 = (undefined1)param_1;
    iVar5 = FUN_1001ce017(uVar3,0x626f6f6b,uVar4,"Location",&local_38,0);
    if (param_3 != (void *)0x0 && iVar5 == 0) {
      iVar5 = FUN_1001703aa(local_38,param_3,0,&local_29,local_88);
      if (iVar5 == 0) {
        cVar1 = FUN_100193976(param_3);
        iVar5 = -0x78;
        if ((cVar1 == '\0') && (iVar5 = 0, local_29 == '\x01')) {
          uVar3 = FUN_1002794b5();
          FUN_1001cdcf1(uVar3,0x626f6f6b,uVar4,"Location",local_38);
        }
      }
    }
    FUN_10017060f(local_38);
    if (iVar5 == 0) {
      uVar3 = FUN_1002794b5();
      FUN_1001ce3d4(uVar3,0x626f6f6b,uVar4,"Name",param_4);
    }
  }
  return iVar5;
}

