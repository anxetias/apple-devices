// name: FUN_1002079e6
// address: 1002079e6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002079e6(void)

{
  undefined8 uVar1;
  char cVar2;
  ulong in_RAX;
  long lVar3;
  ulong local_18;
  
  local_18 = in_RAX;
  if (DAT_1008a2b78 != -1) {
    _dispatch_once(&DAT_1008a2b78,&PTR___NSConcreteGlobalBlock_10083d9f0);
  }
  uVar1 = DAT_1008a2b70;
  cVar2 = _os_log_type_enabled(DAT_1008a2b70,1);
  if (cVar2 != '\0') {
    local_18 = local_18 & 0xffffffffffff0000;
    __os_log_impl(0x100000000,uVar1,1,"idle> forcing on",&local_18,2);
  }
  _DAT_1008c54b0 = 0x101;
  lVar3 = 0;
  do {
    (&DAT_1008c5490)[lVar3] = (&DAT_1008c5490)[lVar3] + 1;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 7);
  FUN_100207b47();
  return;
}

