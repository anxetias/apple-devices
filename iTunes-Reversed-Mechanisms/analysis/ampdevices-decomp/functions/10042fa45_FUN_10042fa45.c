// name: FUN_10042fa45
// address: 10042fa45

undefined8
FUN_10042fa45(undefined8 param_1,undefined1 *param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  long local_160;
  undefined8 local_158;
  long local_150;
  undefined1 local_145;
  int local_144;
  int local_140;
  undefined1 local_139;
  undefined1 local_138;
  undefined1 local_137 [255];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_150 = 0;
  local_160 = 0;
  local_139 = 0;
  uVar14 = 0;
  uVar13 = 0;
  iVar5 = (int)param_3;
  if (param_5 == 0x50494320 && param_4 == 0x41504943) {
    local_140 = iVar5;
    FUN_1004272d9(0,param_2,param_3,&local_138,0xff);
    iVar5 = FUN_1001e0710(local_137,local_138,"image",5,1);
    iVar6 = FUN_1001e0710(local_137,local_138,"/",1,1);
    if (iVar6 == 1 || iVar6 == 6 && iVar5 == 1) {
      local_158 = param_1;
      local_144 = param_5;
      lVar8 = FUN_1001e0710(local_137,local_138,"jpeg",4,1);
      lVar9 = FUN_1001e0710(local_137,local_138,"jpg",3,1);
      if (lVar9 != 0 || lVar8 != 0) {
        uVar13 = 0xd;
      }
      lVar10 = FUN_1001e0710(local_137,local_138,"png",3,1);
      uVar15 = 0xe;
      if (lVar10 == 0) {
        uVar15 = uVar13;
      }
      lVar11 = FUN_1001e0710(local_137,local_138,"bmp",3,1);
      uVar14 = 0x1b;
      if (lVar11 == 0) {
        uVar14 = uVar15;
      }
      param_5 = local_144;
      if ((param_2 != (undefined1 *)0x0) &&
         ((lVar10 != 0 || lVar11 != 0) || (lVar9 != 0 || lVar8 != 0))) {
        local_145 = 0;
        uVar1 = *param_2;
        iVar5 = local_140 + -1;
        uVar7 = FUN_1001e0710(param_2 + 1,(long)iVar5,&local_145,1,0);
        FUN_10042fec9(local_158,param_2 + (ulong)uVar7 + 1,iVar5 - uVar7,uVar1,&local_139,&local_160
                      ,&local_150);
        param_5 = local_144;
      }
    }
  }
  else if (((3 < iVar5) && (param_4 == 0x50494320)) && (uVar14 = 0, param_5 == 0x41504943)) {
    uVar1 = *param_2;
    local_158 = param_1;
    local_140 = iVar5;
    bVar2 = FUN_1001e0934(param_2[1]);
    bVar3 = FUN_1001e0934(param_2[2]);
    bVar4 = FUN_1001e0934(param_2[3]);
    uVar7 = (uint)bVar4 << 8 | (uint)bVar3 << 0x10 | (uint)bVar2 << 0x18;
    if (uVar7 == 0x424d5000) {
      uVar14 = 0x1b;
    }
    else if (uVar7 == 0x4a504700) {
      uVar14 = 0xd;
    }
    else {
      if (uVar7 != 0x504e4700) {
        uVar14 = 0;
        goto LAB_10042fd46;
      }
      uVar14 = 0xe;
    }
    FUN_10042fec9(local_158,param_2 + 4,local_140 + -4,uVar1,&local_139,&local_160,&local_150);
  }
LAB_10042fd46:
  lVar8 = local_160;
  if (local_160 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = FUN_10042b4b0(param_5,local_139,uVar14,local_150,local_160);
    FUN_10017060f(lVar8);
  }
  if (local_150 != 0) {
    FUN_1001c64c1();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar12;
}

