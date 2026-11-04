// name: FUN_1004d1937
// address: 1004d1937

undefined8
FUN_1004d1937(void *param_1,char *param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  size_t sVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined1 local_278 [64];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 != '\0') goto LAB_1004d1be8;
  FUN_1001e40a7(param_3,local_238,local_278);
  cVar1 = FUN_1001e63cd(param_3,"OTGPlaylistInfo",1);
  if ((cVar1 == '\0') &&
     ((((cVar1 = FUN_1001e63cd(local_238,"OnTheGoPlaylist",1), cVar1 == '\0' ||
        (cVar1 = FUN_1001e4e7c("plist",local_278,1), cVar1 == '\0')) ||
       (cVar1 = FUN_1001e4e7c("OnTheGoPlaylist.plist",param_3,1), cVar1 != '\0')) &&
      ((cVar1 = FUN_1001e63cd(local_238,"Playlist_",1), cVar1 == '\0' ||
       (cVar1 = FUN_1001e4e7c("plist",local_278,1), cVar1 == '\0')))))) {
    cVar1 = FUN_1001e63cd(param_3,"GeniusPlaylist",1);
    if ((cVar1 == '\0') || (cVar1 = FUN_1001e4e7c("plist",local_278,1), cVar1 == '\0'))
    goto LAB_1004d1be8;
    plVar10 = (long *)param_5[2];
    pvVar7 = (void *)plVar10[1];
    if (pvVar7 < (void *)plVar10[2]) goto LAB_1004d19ae;
    lVar8 = ((long)pvVar7 - *plVar10 >> 5) * 0xf83e0f83e0f83e1;
    uVar4 = lVar8 + 1;
    if (0x3e0f83e0f83e0f < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_10022a8ca(plVar10);
    }
    lVar2 = plVar10[2] - *plVar10 >> 5;
    uVar6 = lVar2 * 0x1f07c1f07c1f07c2;
    if (uVar4 < uVar6) {
      uVar4 = uVar6;
    }
    uVar6 = 0x3e0f83e0f83e0f;
    if ((ulong)(lVar2 * 0xf83e0f83e0f83e1) < 0x1f07c1f07c1f07) {
      uVar6 = uVar4;
    }
    if (uVar6 == 0) goto LAB_1004d1b86;
    auVar11 = FUN_10022a8da(plVar10 + 2);
LAB_1004d1b8d:
    pvVar9 = (void *)(lVar8 * 0x420 + auVar11._0_8_);
    _memcpy(pvVar9,param_1,0x420);
    lVar8 = (long)pvVar9 + 0x420;
    sVar5 = plVar10[1] - *plVar10;
    pvVar9 = (void *)((long)pvVar9 - sVar5);
    _memcpy(pvVar9,(void *)*plVar10,sVar5);
    pvVar7 = (void *)*plVar10;
    *plVar10 = (long)pvVar9;
    plVar10[1] = lVar8;
    plVar10[2] = auVar11._8_8_ * 0x420 + auVar11._0_8_;
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  else {
    plVar10 = (long *)param_5[1];
    pvVar7 = (void *)plVar10[1];
    if ((void *)plVar10[2] <= pvVar7) {
      lVar8 = ((long)pvVar7 - *plVar10 >> 5) * 0xf83e0f83e0f83e1;
      uVar4 = lVar8 + 1;
      if (0x3e0f83e0f83e0f < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_10022a8ca(plVar10);
      }
      lVar2 = plVar10[2] - *plVar10 >> 5;
      uVar6 = lVar2 * 0x1f07c1f07c1f07c2;
      if (uVar4 < uVar6) {
        uVar4 = uVar6;
      }
      uVar6 = 0x3e0f83e0f83e0f;
      if ((ulong)(lVar2 * 0xf83e0f83e0f83e1) < 0x1f07c1f07c1f07) {
        uVar6 = uVar4;
      }
      if (uVar6 == 0) {
LAB_1004d1b86:
        auVar11 = ZEXT816(0);
      }
      else {
        auVar11 = FUN_10022a8da(plVar10 + 2);
      }
      goto LAB_1004d1b8d;
    }
LAB_1004d19ae:
    _memcpy(pvVar7,param_1,0x420);
    lVar8 = (long)pvVar7 + 0x420;
  }
  plVar10[1] = lVar8;
LAB_1004d1be8:
  if ((*(char *)(*param_5 + 0x6acf) == '\0') ||
     (uVar3 = 0xffffff80, *(char *)(*param_5 + 0x6acc) == '\0')) {
    FUN_1001b1464();
    uVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

