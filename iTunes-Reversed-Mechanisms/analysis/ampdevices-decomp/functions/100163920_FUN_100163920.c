// name: FUN_100163920
// address: 100163920

ulong FUN_100163920(long param_1,long param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined7 uVar10;
  ulong uVar9;
  undefined1 local_68 [16];
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  char local_31;
  
  if (param_2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_100671a13(uVar7);
    }
  }
  else {
    if (param_3 != 0) {
      iVar3 = FUN_100171ce8(param_2);
      uVar10 = (undefined7)((ulong)param_3 >> 8);
      if (iVar3 == 0x197) {
        FUN_1001e9de0(param_1);
        lVar4 = FUN_100162178();
        if (lVar4 != 0) {
          lVar5 = FUN_100171475(*(undefined8 *)(param_1 + 0xa8),lVar4);
          if (lVar5 != 0) {
            cVar2 = _CFHTTPAuthenticationIsValid(lVar5,0);
            if (cVar2 == '\0') {
              FUN_100162d58(param_1,param_4);
            }
          }
        }
        lVar5 = FUN_100171650(DAT_1008c4d90,param_2);
        if (lVar5 == 0) {
          uVar9 = 0;
        }
        else {
          cVar2 = FUN_10017165a(lVar5,0);
          uVar9 = CONCAT71(uVar10,cVar2 != '\0');
          if (cVar2 != '\0' && lVar4 != 0) {
            FUN_100171502(*(undefined8 *)(param_1 + 0xa8),lVar4,lVar5);
            uVar9 = CONCAT71(uVar10,1);
          }
        }
        FUN_10017060f(lVar5);
LAB_100163c72:
        FUN_10017060f(lVar4);
      }
      else {
        if (iVar3 != 0x191) {
          uVar9 = 0;
          goto LAB_100163c7f;
        }
        FUN_1001e9de0(param_1);
        lVar4 = FUN_10016226c(param_1,param_3);
        lVar5 = FUN_100171650(DAT_1008c4d90,param_2);
        if (lVar5 != 0) {
          lVar6 = FUN_100171711(lVar5);
          local_31 = FUN_10017165a(lVar5,0);
          local_58 = lVar6;
          if (lVar6 == 0) {
            lVar6 = FUN_1001705fc(&cf__);
          }
          lVar8 = lVar4;
          if (lVar4 == 0) {
            lVar8 = lVar6;
          }
          local_48 = lVar6;
          local_40 = FUN_1001620b6();
          local_50 = lVar5;
          if (local_40 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = FUN_100171475(*(undefined8 *)(param_1 + 0xa8),local_40);
          }
          if (lVar4 == 0) {
LAB_100163ba0:
            lVar4 = local_50;
            if (local_31 == '\0') {
              FUN_100162ad4(param_1,lVar8,param_3);
LAB_100163c00:
              uVar9 = 0;
              lVar5 = local_40;
            }
            else {
              bVar1 = false;
LAB_100163bc7:
              lVar4 = local_50;
              cVar2 = FUN_100171755(local_50);
              if (cVar2 == '\0') {
                *(undefined1 *)(param_1 + 0xb0) = 1;
              }
              if (local_58 == 0) {
                uVar7 = FUN_100163cab(DAT_1008c4d90,param_3);
                FUN_1001626bc(param_1,local_48,uVar7);
                FUN_10017060f(uVar7);
              }
              else {
                FUN_1001626bc(param_1,local_48,param_3);
              }
              if (!bVar1) {
                FUN_1001629dc(param_1,param_3);
              }
              lVar5 = local_40;
              FUN_100171502(*(undefined8 *)(param_1 + 0xa8),local_40,lVar4);
              uVar9 = CONCAT71(uVar10,1);
            }
          }
          else {
            cVar2 = FUN_100169eb1(lVar4,local_48);
            if (cVar2 == '\0') goto LAB_100163ba0;
            bVar1 = lVar5 != 0;
            if (lVar5 == 0) {
LAB_100163baf:
              FUN_100162ad4(param_1,lVar4,param_3);
              lVar4 = local_50;
              if (local_31 == '\0') goto LAB_100163c00;
              goto LAB_100163bc7;
            }
            cVar2 = FUN_10017165a(lVar5,local_68);
            if (cVar2 == '\0') goto LAB_100163baf;
            cVar2 = FUN_100171755(lVar5);
            if (cVar2 == '\0') {
              *(undefined1 *)(param_1 + 0xb0) = 1;
            }
            FUN_1001629dc(param_1,param_3);
            uVar9 = CONCAT71(uVar10,1);
            lVar4 = local_50;
            lVar5 = local_40;
          }
          FUN_10017060f(lVar5);
          FUN_10017060f(lVar4);
          lVar4 = local_48;
          goto LAB_100163c72;
        }
        uVar7 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar7,0x10);
        if (cVar2 != '\0') {
          FUN_100671927(uVar7);
        }
        uVar9 = 0;
        FUN_1001782e9(0,0);
      }
      FUN_1001e9eb9(param_1);
      goto LAB_100163c7f;
    }
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_10067199d(uVar7);
    }
  }
  uVar9 = 0;
  FUN_1001782e9(0,0);
LAB_100163c7f:
  return uVar9 & 0xffffffff;
}

