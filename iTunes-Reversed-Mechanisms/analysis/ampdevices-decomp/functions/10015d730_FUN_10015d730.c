// name: FUN_10015d730
// address: 10015d730

bool FUN_10015d730(void *param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == (void *)0x0 || param_2 == (void *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066d671(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  iVar2 = _memcmp(param_1,param_2,0x28);
  return iVar2 == 0;
}

