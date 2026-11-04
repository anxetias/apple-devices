// name: FUN_1001de059
// address: 1001de059

long FUN_1001de059(undefined8 param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong local_38;
  
  uVar2 = FUN_1001737f8();
  uVar5 = (ulong)uVar2;
  if (param_2 == 0x100) {
    local_38 = uVar5 * 2;
  }
  else if (param_2 == 0x8000100) {
    local_38 = (ulong)(uVar2 * 3);
  }
  else {
    FUN_1001739f3(param_1,0,uVar5,param_2,0x3f,0,0,0,&local_38);
  }
  lVar3 = FUN_1001c63e1(local_38);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006b9253(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001739f3(param_1,0,uVar5,param_2,0x3f,0,lVar3,local_38,param_3);
  }
  return lVar3;
}

