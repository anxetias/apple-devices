// name: FUN_100553f8e
// address: 100553f8e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100553f8e(long param_1,long param_2)

{
  float fVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_2a = "msg != nullptr";
LAB_10055419e:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (*(char *)(param_1 + 0x64a8) != '\0') {
      if (*(void **)(param_2 + 8) != (void *)0x0) {
        _memcpy(*(void **)(param_2 + 8),(void *)(param_1 + 0x14d4),0x1660);
      }
      puVar3 = *(undefined8 **)(param_2 + 0x10);
      if (puVar3 != (undefined8 *)0x0) {
        uVar6 = *(undefined8 *)(param_1 + 0x2b3c);
        *puVar3 = *(undefined8 *)(param_1 + 0x2b34);
        puVar3[1] = uVar6;
        _memcpy(puVar3 + 2,(void *)(param_1 + 0x2b44),0x3638);
      }
      uVar4 = *(ulong *)(param_1 + 0x1490);
      auVar10._8_4_ = (int)(uVar4 >> 0x20);
      auVar10._0_8_ = uVar4;
      auVar10._12_4_ = DAT_10070d3c0._4_4_;
      dVar9 = ((double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar4) - _DAT_10070d3d0) +
              (auVar10._8_8_ - _UNK_10070d3d8);
      fVar1 = *(float *)(param_1 + 0x1460);
      *(int *)(param_2 + 0x1c) = (int)(long)(dVar9 / (double)fVar1);
      *(double *)(param_2 + 0x20) = dVar9;
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x14b8);
      *(uint *)(param_2 + 0x28) = *(uint *)(param_1 + 0x86c) / 1000;
      *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x858);
      uVar2 = *(uint *)(param_1 + 0x6400);
      uVar6 = 0;
      if (((ulong)uVar2 != 0) && (*(long *)(param_1 + 0x6408) != 0)) {
        uVar7 = 1;
        if (0 < (int)uVar2) {
          lVar8 = 1;
          do {
            if ((uint)(long)((float)uVar4 / fVar1) <
                *(uint *)(*(long *)(param_1 + 0x6408) + lVar8 * 4)) {
              uVar7 = (undefined4)lVar8;
              break;
            }
            lVar8 = lVar8 + 1;
          } while ((ulong)uVar2 + 1 != lVar8);
        }
        *(undefined4 *)(param_2 + 0x30) = uVar7;
      }
      goto LAB_100554112;
    }
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_2a = "mPlayerOpen";
      goto LAB_10055419e;
    }
  }
  FUN_1001782e9(0,0);
  uVar6 = 0xffffffce;
LAB_100554112:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

