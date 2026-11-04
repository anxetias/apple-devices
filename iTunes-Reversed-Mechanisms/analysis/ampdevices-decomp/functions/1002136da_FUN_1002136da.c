// name: FUN_1002136da
// address: 1002136da

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002136da(long param_1,undefined4 param_2)

{
  long *plVar1;
  double dVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  undefined1 local_288 [16];
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 local_260 [16];
  long local_250;
  long local_248;
  long local_240;
  undefined4 local_238;
  int local_234;
  float local_230;
  float local_22c;
  undefined1 local_228 [8];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  undefined1 local_1e0 [248];
  undefined1 local_e8 [128];
  undefined **local_68;
  code *local_60;
  undefined8 local_58;
  long local_50;
  undefined ***local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_240 = param_1 + 0x2110;
  local_250 = param_1 + 0x21e8;
  local_248 = param_1 + 0x23e8;
  bVar9 = false;
  local_234 = -1;
  local_230 = DAT_100700b24;
  local_22c = 0.0;
  iVar8 = 0;
  local_238 = param_2;
  do {
    if ((char)local_238 == '\0') {
      if (*(char *)(param_1 + 0x28a0) == '\0') goto LAB_100213a37;
      if (bVar9) goto LAB_100213792;
      bVar9 = false;
    }
    else {
      if ((*(int *)(param_1 + 0x2ad4) != 0xc) || (*(char *)(param_1 + 0x2ac8) != '\0'))
      goto LAB_100213a37;
LAB_100213792:
      cVar4 = FUN_1001c19bc();
      bVar9 = true;
      if (cVar4 != '\0') {
        *(undefined4 *)(param_1 + 0x2acc) = 0xffffff80;
LAB_100213a37:
        if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
          ___stack_chk_fail();
        }
        return;
      }
    }
    iVar5 = FUN_1001e9de0(local_240);
    if (iVar5 == 0) {
      if (bVar9) {
        dVar2 = *(double *)(param_1 + 0x2ac0);
        if ((dVar2 != DAT_100701af0) || (NAN(dVar2) || NAN(DAT_100701af0))) {
          *(double *)(param_1 + 0x2ae0) = dVar2;
        }
      }
      iVar8 = *(int *)(param_1 + 0x2ab8);
      local_22c = *(float *)(param_1 + 0x2abc);
      FUN_1001e9eb9(local_240);
    }
    if (iVar8 != local_234) {
      FUN_1002131e8(param_1,iVar8);
      local_234 = iVar8;
    }
    if ((local_22c != local_230) || (NAN(local_22c) || NAN(local_230))) {
      if (local_22c <= 0.0) {
        FUN_10021356c(param_1);
      }
      else {
        fVar10 = (local_22c * DAT_100717f3c) / DAT_10070bcf0;
        uVar6 = (ulong)fVar10;
        FUN_1002135fa(param_1,(long)(fVar10 - _DAT_10070844c) & (long)uVar6 >> 0x3f | uVar6);
      }
      local_230 = local_22c;
    }
    if ((*(char *)(param_1 + 0x2ac9) == '\x01') && (*(char *)(param_1 + 0x2aca) == '\0')) {
      FUN_10044eef2(local_228);
      FUN_1001c334a(local_260,0x10cf0051);
      FUN_1001b8dfc(local_288,local_250);
      FUN_1001bbec4(&local_68,local_260,local_288);
      FUN_1001b80b2(local_200,&local_68);
      FUN_1001b7a50(&local_68);
      FUN_1001b7a50(local_288);
      FUN_1001b7a50(local_260);
      FUN_1001b8172(local_220,local_248);
      FUN_1001c334a(&local_68,0x5db3000e);
      FUN_1001b80b2(local_1e0,&local_68);
      FUN_1001b7a50(&local_68);
      local_60 = FUN_1002136b2;
      local_58 = 0;
      local_68 = &PTR_FUN_10083dd90;
      local_50 = param_1;
      local_48 = &local_68;
      FUN_1002186ec(&local_68,local_e8);
      if (local_48 == &local_68) {
        lVar7 = 0x20;
LAB_100213a03:
        (**(code **)((long)*local_48 + lVar7))();
      }
      else {
        lVar7 = 0x28;
        if (local_48 != (undefined ***)0x0) goto LAB_100213a03;
      }
      FUN_10044f1a0(local_228);
      FUN_10020dfaa(local_228);
      *(undefined1 *)(param_1 + 0x2aca) = 1;
    }
    else {
      plVar3 = *(long **)(param_1 + 0x28b0);
      local_278 = *(undefined4 *)(param_1 + 0x28a8);
      uStack_274 = *(undefined4 *)(param_1 + 0x28ac);
      uStack_270 = *(undefined4 *)(param_1 + 0x28b0);
      uStack_26c = *(undefined4 *)(param_1 + 0x28b4);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar3[1] = plVar3[1] + 1;
        UNLOCK();
      }
      FUN_1002252e1(&local_278);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar7 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  } while( true );
}

