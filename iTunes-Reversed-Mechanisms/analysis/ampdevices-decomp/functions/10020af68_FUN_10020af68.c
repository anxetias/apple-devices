// name: FUN_10020af68
// address: 10020af68

bool FUN_10020af68(undefined8 param_1,long param_2,short param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  if (param_2 == 0) {
    bVar4 = true;
  }
  else {
    lVar2 = FUN_100166c1b(param_1,&cf_MinimumOSVersion);
    if (lVar2 == 0) {
      bVar4 = true;
    }
    else {
      uVar3 = FUN_1001734f5(DAT_1008c4d90,param_2,0x8000100,
                            *(undefined8 *)PTR__kCFAllocatorNull_10082e028);
      lVar2 = FUN_100173bb7(uVar3,lVar2,0x40);
      bVar4 = lVar2 != -1;
      FUN_10017060f(uVar3);
    }
    if ((ushort)(param_3 - 0xa00U) < 0x11) {
      uVar3 = FUN_100166c1b(param_1,&cf_Identifier);
      cVar1 = FUN_100170633(uVar3,&cf_com_facebook_Facebook);
      if (cVar1 != '\0') {
        bVar4 = false;
      }
    }
  }
  return bVar4;
}

