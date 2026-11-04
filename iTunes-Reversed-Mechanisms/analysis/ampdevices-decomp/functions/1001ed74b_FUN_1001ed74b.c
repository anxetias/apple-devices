// name: FUN_1001ed74b
// address: 1001ed74b

long FUN_1001ed74b(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar3 = FUN_1001c6429(0x40);
  if (lVar3 != 0) {
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    *(int *)(lVar3 + 0x20) = param_1;
    local_38 = lVar3;
    iVar2 = FUN_1001e8dd6(&local_58,0,0);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        pcVar5 = "CFRunLoopThread";
        if (param_3 != (char *)0x0) {
          pcVar5 = param_3;
        }
        if (param_1 == 2) {
          pcVar5 = "CFRunLoopThread (Write)";
        }
        else if (param_1 == 1) {
          pcVar5 = "CFRunLoopThread (Download)";
        }
        iVar2 = FUN_1001ee6ff(FUN_1001ed841,&local_58,param_2,0,0,pcVar5);
        if (iVar2 == 0) {
          FUN_1001e944c(&local_58);
        }
        FUN_1001e9587(&local_58);
        return lVar3;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006c4f1b(iVar2,uVar4);
      }
    }
  }
  return 0;
}

