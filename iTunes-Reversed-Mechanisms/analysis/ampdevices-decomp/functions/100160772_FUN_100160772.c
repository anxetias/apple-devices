// name: FUN_100160772
// address: 100160772

int FUN_100160772(long param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  long in_RAX;
  undefined8 uVar3;
  long lVar4;
  long local_28;
  
  local_28 = in_RAX;
  iVar2 = FUN_100160255(param_1,&local_28);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = 0;
      if (param_2 - local_28 != 0) {
        if (*(char *)(param_1 + 5) == '\0') {
          iVar2 = FUN_1001602ae(param_1);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
        else {
          if (*(ulong *)(param_1 + 0x38) < *(ulong *)(param_1 + 0x20)) {
            lVar4 = *(long *)(param_1 + 0x30);
          }
          else {
            lVar4 = *(long *)(param_1 + 0x30);
            if ((param_2 <= *(long *)(param_1 + 0x40) - 1U) &&
               (*(long *)(param_1 + 0x40) + lVar4 + ~*(ulong *)(param_1 + 0x38) <= param_2)) {
              *(ulong *)(param_1 + 0x20) = *(ulong *)(param_1 + 0x20) + (param_2 - local_28);
              return 0;
            }
          }
          *(long *)(param_1 + 0x20) = lVar4 + 1;
          *(long *)(param_1 + 0x38) = lVar4;
        }
        iVar2 = FUN_1001d7378(*(undefined8 *)(param_1 + 8),param_2);
        FUN_1001d7569(*(undefined8 *)(param_1 + 8),param_1 + 0x40);
        if (*(ulong *)(param_1 + 0x40) != param_2) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_10066ee01(uVar3);
          }
          FUN_1001782e9(0,0);
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_10066ee77(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}

