// name: FUN_10019268f
// address: 10019268f

int FUN_10019268f(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_10018ed8e();
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = _FSUnmountVolumeSync(0,0,0);
      if (iVar2 == 0) {
        FUN_1001820e5(1);
        iVar2 = 0;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100694842(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}

