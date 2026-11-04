// name: FUN_10017999d
// address: 10017999d

undefined8 FUN_10017999d(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x48617368)) {
    uVar2 = FUN_1001797cd(param_1,(char)param_1[1]);
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_100683ba2(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

