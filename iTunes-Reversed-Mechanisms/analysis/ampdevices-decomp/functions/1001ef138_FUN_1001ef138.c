// name: FUN_1001ef138
// address: 1001ef138

void FUN_1001ef138(long param_1,ulong param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double local_a0;
  long local_98 [4];
  long *local_78;
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_48 = (long *)0x0;
  iVar3 = FUN_1001e9de0(&DAT_1008c5428);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      param_2 = param_2 & 0xffffffff;
      lVar4 = FUN_1001eee40(param_2);
      if (lVar4 == 0) {
        local_a0 = 0.0;
        uVar6 = 0;
        uVar5 = 0;
      }
      else {
        if (*(long *)(lVar4 + 0x80) != param_1) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            FUN_1006c5a2a(uVar5);
          }
          FUN_1001782e9(0,0);
        }
        param_2 = *(ulong *)(lVar4 + 0x10);
        FUN_1001eefae(local_68,lVar4 + 0x20);
        uVar5 = *(undefined8 *)(lVar4 + 0x50);
        uVar6 = *(undefined8 *)(lVar4 + 0x58);
        dVar1 = *(double *)(lVar4 + 0x68);
        local_a0 = 0.0;
        if ((dVar1 != 0.0) || (NAN(dVar1))) {
          if ((dVar1 != DAT_100700af8) || (NAN(dVar1) || NAN(DAT_100700af8))) {
            local_a0 = (double)_CFAbsoluteTimeGetCurrent();
            local_a0 = local_a0 + *(double *)(lVar4 + 0x68);
          }
        }
        *(undefined1 *)(lVar4 + 0x88) = 0;
      }
      FUN_1001e9eb9(&DAT_1008c5428);
      if (local_48 == (long *)0x0) {
        local_78 = (long *)0x0;
      }
      else if (local_48 == local_68) {
        local_78 = local_98;
        (**(code **)(*local_48 + 0x18))();
      }
      else {
        local_78 = (long *)(**(code **)(*local_48 + 0x10))();
      }
      FUN_1001ef57c(param_2,local_98,uVar5,uVar6);
      if (local_78 == local_98) {
        lVar4 = 0x20;
LAB_1001ef2f3:
        (**(code **)(*local_78 + lVar4))();
      }
      else {
        lVar4 = 0x28;
        if (local_78 != (long *)0x0) goto LAB_1001ef2f3;
      }
      if (((local_a0 != 0.0) || (NAN(local_a0))) &&
         (iVar3 = FUN_1001e9de0(&DAT_1008c5428), iVar3 != -0x80)) {
        if (iVar3 == 0) {
          lVar4 = FUN_1001eee40(param_2);
          if (lVar4 != 0) {
            if (*(long *)(lVar4 + 0x80) != param_1) {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                FUN_1006c5aa0(uVar5);
              }
              FUN_1001782e9(0,0);
            }
            if (*(char *)(lVar4 + 0x88) == '\0') {
              FUN_100172d9d(local_a0,*(undefined8 *)(lVar4 + 0x80));
            }
          }
          FUN_1001e9eb9(&DAT_1008c5428);
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            FUN_1006c5b16(iVar3,uVar5);
          }
        }
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_1006c5b82(iVar3,uVar5);
      }
    }
  }
  if (local_48 == local_68) {
    lVar4 = 0x20;
  }
  else {
    lVar4 = 0x28;
    if (local_48 == (long *)0x0) goto LAB_1001ef3e5;
  }
  (**(code **)(*local_48 + lVar4))();
LAB_1001ef3e5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

