// name: FUN_1001cbec1
// address: 1001cbec1

int FUN_1001cbec1(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_28;
  int local_1c;
  
  iVar2 = FUN_1001c955b(param_1,param_2,0,0,&local_28);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if (local_28 == 0) {
        iVar2 = 0;
      }
      else {
        local_1c = 0;
        iVar2 = FUN_1001ca647();
        if ((iVar2 == 0) && (1 < local_1c)) {
          iVar2 = FUN_1001caeb4(local_28,1);
        }
        else {
          iVar2 = FUN_1001c9e7d(local_28,local_28);
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006aea7c(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}

