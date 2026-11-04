// name: FUN_10015a764
// address: 10015a764

undefined8 FUN_10015a764(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61726179)) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      FUN_10066af3d(uVar5);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 6);
    iVar3 = param_1[10];
    iVar1 = param_1[1];
    iVar2 = param_1[3];
    FUN_10015a7f4(param_1);
    FUN_10015a455(iVar1,uVar5,(char)iVar3,param_1);
    param_1[3] = iVar2;
    uVar5 = 0;
  }
  return uVar5;
}

