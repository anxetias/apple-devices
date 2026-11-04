// name: FUN_10043901a
// address: 10043901a

undefined8 FUN_10043901a(long param_1,int *param_2,byte *param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  int iVar8;
  long *plVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_2a0 [16];
  long local_290;
  undefined8 local_288;
  long *local_280;
  long local_278 [2];
  byte *local_268;
  ulong local_260;
  int *local_258;
  long local_250;
  undefined4 local_248;
  char *local_244;
  undefined2 local_23c;
  char *local_23a;
  undefined4 local_48;
  undefined8 local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_260 = 0;
  local_280 = local_278;
  local_278[0] = 0;
  local_278[1] = 0;
  local_268 = param_3;
  local_258 = param_2;
  local_250 = param_1;
  lVar3 = FUN_1004e0c3f(param_1,1);
  FUN_10031c15f(lVar3);
  if ((((local_258 != (int *)0x0) && (*local_258 == 0x4f4c5354)) && (local_258[1] != 0)) &&
     (iVar8 = (int)((ulong)(*(long *)(local_258 + 4) - *(long *)(local_258 + 2)) >> 3) * -0x49249249
     , iVar8 != 0)) {
    iVar10 = 0;
    do {
      lVar4 = FUN_1005968ea(local_258,iVar10,0);
      if (lVar4 == 0) {
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          local_248 = 0x8220202;
          local_244 = "Assertion failure";
          local_23c = 0x822;
          local_23a = "trackInfo != nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_248,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else if (*(long *)(lVar4 + 0x10) == lVar3) {
        FUN_1003a5708(&local_280,lVar4 + 0xf0);
        *(undefined4 *)(lVar4 + 0xc) = 1;
      }
      iVar10 = iVar10 + 1;
    } while (iVar8 != iVar10);
  }
  if (local_280 != local_278) {
    local_290 = lVar3 + 0x1df0;
    plVar6 = local_280;
    do {
      iVar8 = *(int *)((long)plVar6 + 0x1c);
      for (lVar4 = FUN_1002f930c(lVar3); lVar4 != 0; lVar4 = FUN_1002f9451(lVar4)) {
        if ((*(int *)(lVar4 + 0xf0) == iVar8) && (*(int *)(lVar4 + 0xc) == 0)) goto LAB_100439262;
      }
      iVar10 = FUN_1001de41f(local_290,iVar8,&local_248);
      if (((iVar10 == 0) && (*(char *)(local_250 + 0x14cda) != '\0')) &&
         ((*(char *)(local_250 + 0x6abf) != '\0' &&
          (cVar2 = FUN_1002be807(lVar3,&local_248), cVar2 != '\0')))) {
        FUN_100439e7e(local_250,&local_260);
        cVar2 = FUN_1002c16fa(*(undefined8 *)(local_250 + 0x15310),&local_248);
        if (cVar2 == '\0') {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          local_288 = DAT_1008c75b8;
          cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar2 != '\0') {
            FUN_1001b8dfc(local_2a0,&local_248);
            local_44 = FUN_1001b83ae(local_2a0);
            local_48 = 0x8220102;
            __os_log_impl(0x100000000,local_288,1,
                          "sync> adding \"%{public}s\" to selected music genres",&local_48,0xc);
            FUN_1001b7a50(local_2a0);
          }
          FUN_1002c1591(*(undefined8 *)(local_250 + 0x15310),&local_248);
          local_260 = local_260 | 0x2000;
          if (local_268 != (byte *)0x0) {
            *local_268 = *local_268 | 0x20;
          }
        }
      }
      for (lVar4 = FUN_1002f930c(lVar3); lVar4 != 0; lVar4 = FUN_1002f9451(lVar4)) {
        if ((*(int *)(lVar4 + 0xf0) == iVar8) &&
           (uVar5 = FUN_1004744bf(lVar4,0), (uVar5 & 0x10000) == 0 && (uVar5 & 0xfe182321) != 0)) {
          *(undefined4 *)(lVar4 + 0xc) = 0;
        }
      }
LAB_100439262:
      plVar1 = (long *)plVar6[1];
      plVar9 = plVar6;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar9[2];
          bVar11 = (long *)*plVar6 != plVar9;
          plVar9 = plVar6;
        } while (bVar11);
      }
      else {
        do {
          plVar6 = plVar1;
          plVar1 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    } while (plVar6 != local_278);
  }
  FUN_100438e75(local_250,local_258,local_268,&local_260);
  FUN_10031c15f(lVar3);
  if (local_260 != 0) {
    FUN_1004ef324(local_250,local_260,0);
    uVar7 = FUN_1001c156e();
    FUN_1001c6987(uVar7,0x69707372,*(undefined4 *)(local_250 + 0x28),0,0);
  }
  FUN_1002a41f4(&local_280,local_278[0]);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

