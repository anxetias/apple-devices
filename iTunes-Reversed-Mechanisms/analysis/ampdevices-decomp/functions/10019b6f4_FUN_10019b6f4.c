// name: FUN_10019b6f4
// address: 10019b6f4

int FUN_10019b6f4(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_10017304f();
  uVar5 = FUN_1001715c3(uVar4);
  iVar2 = FUN_100171607(uVar4);
  cVar1 = FUN_100170633(uVar5,*(undefined8 *)PTR__kCFErrorDomainPOSIX_10082e088);
  if (cVar1 == '\0') {
    cVar1 = FUN_100170633(uVar5,*(undefined8 *)PTR__kCFErrorDomainOSStatus_10082e080);
    iVar3 = iVar2;
    if (cVar1 == '\0') {
      cVar1 = FUN_100170633(uVar5,*(undefined8 *)PTR__kCFErrorDomainCFNetwork_10082d5b8);
      if (cVar1 == '\0') {
        FUN_100170633(uVar5,*(undefined8 *)PTR__kCFErrorDomainSystemConfiguration_10082c340);
      }
      else if (iVar2 < 0x12f) {
        iVar3 = -0xc4e;
        if ((1 < iVar2 - 1U) && (iVar3 = iVar2, iVar2 == -0x3ed)) {
          iVar3 = 0x2ee4;
        }
      }
      else if (iVar2 == 0x131) {
        iVar3 = 0x2ee3;
      }
      else if (iVar2 == 0x130) {
        iVar3 = 0x2ee2;
      }
      else if (iVar2 == 0x12f) {
        iVar3 = 0x2ee1;
      }
    }
  }
  else {
    iVar3 = FUN_1001eb020(iVar2);
  }
  FUN_10017060f(uVar4);
  return iVar3;
}

