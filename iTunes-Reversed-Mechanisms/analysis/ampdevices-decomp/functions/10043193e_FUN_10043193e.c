// name: FUN_10043193e
// address: 10043193e

bool FUN_10043193e(long param_1)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  undefined2 local_48 [8];
  undefined2 local_38 [8];
  undefined2 local_28 [8];
  
  if (*(char *)(param_1 + 0x6af9) != '\0') goto LAB_100431ab8;
  *(undefined1 *)(param_1 + 0x6af9) = 2;
  iVar1 = *(int *)(param_1 + 0x66b0);
  if (iVar1 < 0x69506f64) {
    if (iVar1 == 0x69506164) {
      cVar2 = FUN_1001cd44e("universal-iPad-library",0,0);
      if (cVar2 == '\0') goto LAB_100431ab8;
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        puVar4 = local_28;
        local_28[0] = 0;
        pcVar3 = "setup> is universal iPad library";
LAB_100431a9e:
        __os_log_impl(0x100000000,uVar5,1,pcVar3,puVar4,2);
      }
    }
    else {
      if (iVar1 != 0x6950686e) goto LAB_100431ab8;
      cVar2 = FUN_1001cd44e("universal-iPhone-library",0,0);
      if (cVar2 == '\0') goto LAB_100431ab8;
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        puVar4 = local_38;
        local_38[0] = 0;
        pcVar3 = "setup> is universal iPhone library";
        goto LAB_100431a9e;
      }
    }
  }
  else {
    if ((iVar1 != 0x69506f74) && (iVar1 != 0x69506f64)) goto LAB_100431ab8;
    cVar2 = FUN_1001cd44e("universal-iPod-library",0,0);
    if (cVar2 == '\0') goto LAB_100431ab8;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      puVar4 = local_48;
      local_48[0] = 0;
      pcVar3 = "setup> is universal iPod library";
      goto LAB_100431a9e;
    }
  }
  *(undefined1 *)(param_1 + 0x6af9) = 1;
LAB_100431ab8:
  return *(char *)(param_1 + 0x6af9) == '\x01';
}

