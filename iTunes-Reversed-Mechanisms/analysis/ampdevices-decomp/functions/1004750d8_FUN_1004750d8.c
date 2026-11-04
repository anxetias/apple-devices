// name: FUN_1004750d8
// address: 1004750d8

/* WARNING: Type propagation algorithm not settling */

ulong FUN_1004750d8(long param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong unaff_R15;
  undefined7 uVar8;
  uint local_22c [2];
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_22c[1] = 0x8220202;
      local_224 = "Assertion failure";
      local_21c = 0x822;
      local_21a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_22c + 1,0x16);
    }
    unaff_R15 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar4 = FUN_100279b99();
    cVar2 = FUN_100475316(param_1);
    uVar8 = (undefined7)(unaff_R15 >> 8);
    if (((cVar2 == '\0') || (*(int *)(*(long *)(param_1 + 0x70) + 0x1c) == 0)) ||
       ((((FUN_100475454(param_1,local_22c + 1), *(char *)(lVar4 + 7) == '\0' ||
          (cVar2 = FUN_10057afbf(local_22c + 1,0,1,local_22c), cVar2 == '\0')) ||
         (((*(ushort *)(lVar4 + 0x12) != 0 && (local_22c[0] <= *(ushort *)(lVar4 + 0x12))) &&
          (*(int *)(lVar4 + 0x16) != 0x44)))) &&
        (((*(char *)(lVar4 + 8) == '\0' ||
          (cVar2 = FUN_10057afbf(local_22c + 1,0,2,local_22c), cVar2 == '\0')) ||
         ((*(ushort *)(lVar4 + 0x14) != 0 && (local_22c[0] <= *(ushort *)(lVar4 + 0x14))))))))) {
      if (*(char *)(lVar4 + 5) != '\0') {
        uVar5 = FUN_100474dd0(param_1,0);
        if (((uVar5 & 0x200004) == 0) ||
           ((iVar1 = *(int *)(*(long *)(param_1 + 0x58) + 0x3c), iVar1 != 0x53485244 &&
            (iVar1 != 0x48545450)))) {
          if (*(char *)(param_1 + 0xb8) == '\x01') {
            cVar2 = FUN_100475316(param_1);
            unaff_R15 = CONCAT71(uVar8,1);
            if (cVar2 != '\0') goto LAB_10047529a;
          }
        }
        else {
          unaff_R15 = CONCAT71(uVar8,1);
          if ((*(char *)(param_1 + 0xb8) == '\x01') ||
             ((((*(char *)(param_1 + 0xb8) != '\x02' && (iVar1 != 0x53485244)) &&
               (lVar6 = FUN_1002ba707(param_1), lVar6 != 0)) &&
              ((lVar6 = FUN_100242590(lVar6), lVar6 != 0 && (*(char *)(lVar6 + 0xb8) == '\x01'))))))
          goto LAB_10047529a;
        }
      }
      bVar3 = FUN_1004744bf(param_1,0);
      unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),*(char *)(lVar4 + 6) != '\0' & bVar3 >> 5);
    }
    else {
      unaff_R15 = CONCAT71(uVar8,1);
    }
  }
LAB_10047529a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return unaff_R15 & 0xffffffff;
}

