// name: FUN_1001a6783
// address: 1001a6783

undefined8 FUN_1001a6783(undefined4 param_1,char param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char local_31;
  
  iVar2 = _IOIteratorNext();
  if (iVar2 != 0) {
    uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_10082e018;
    do {
      lVar3 = _IORegistryEntryCreateCFProperty(iVar2,&cf_IOBuiltin,uVar4,0);
      if (lVar3 == 0) {
        local_31 = '\x01';
LAB_1001a6827:
        lVar3 = FUN_1001a6877(iVar2);
        if (lVar3 == 0) {
          uVar4 = 5;
        }
        else {
          uVar4 = 0;
          FUN_100170fc3(lVar3,0,6,param_3);
          FUN_10017060f(lVar3);
        }
        _IOObjectRelease(iVar2);
        return uVar4;
      }
      cVar1 = FUN_100165191(lVar3,&local_31);
      if (cVar1 == '\0') {
        local_31 = '\x01';
      }
      FUN_10017060f(lVar3);
      if ((param_2 == '\0') || (local_31 != '\0')) goto LAB_1001a6827;
      _IOObjectRelease(iVar2);
      iVar2 = _IOIteratorNext(param_1);
    } while (iVar2 != 0);
  }
  return 5;
}

