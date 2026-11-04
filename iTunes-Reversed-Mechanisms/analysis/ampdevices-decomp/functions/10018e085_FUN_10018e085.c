// name: FUN_10018e085
// address: 10018e085

/* WARNING: Removing unreachable block (ram,0x00010018e140) */
/* WARNING: Removing unreachable block (ram,0x00010018e145) */
/* WARNING: Removing unreachable block (ram,0x00010018e14b) */
/* WARNING: Removing unreachable block (ram,0x00010018e153) */

undefined1 FUN_10018e085(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  cVar1 = FUN_10017cbd0(param_1);
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100692ac4(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = FUN_10016ff43(0,param_1);
    if (lVar2 != 0) {
      _LSCopyItemInfoForURL(lVar2,6);
    }
    FUN_10017060f(lVar2);
  }
  return 0;
}

