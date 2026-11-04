// name: FUN_100440ac4
// address: 100440ac4

ulong FUN_100440ac4(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 local_58 [16];
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_48 = param_3;
  local_40 = param_2;
  lVar2 = FUN_10017076e();
  if (0 < lVar2) {
    lVar10 = 0;
    local_38 = param_4;
    do {
      lVar3 = FUN_100170853(param_1,lVar10);
      if (lVar3 != 0) {
        lVar4 = _AVCFMetadataItemCopyKey(lVar3);
        if (lVar4 != 0) {
          lVar5 = FUN_1001705e9(lVar4);
          lVar6 = FUN_100171f56();
          if (lVar5 == lVar6) {
            if ((local_48 != 0) && (lVar5 = FUN_1001720fd(lVar4,local_48,0), lVar5 == 0)) {
LAB_100440b81:
              lVar3 = _AVCFMetadataItemCopyValue(lVar3);
              if (lVar3 != 0) {
                lVar2 = FUN_1001705e9(lVar3);
                lVar10 = FUN_100173434();
                if (lVar2 == lVar10) {
                  puVar7 = local_58;
                  FUN_1001b7eb0(puVar7,lVar3);
                  FUN_1001b80b2(local_38,puVar7);
                }
                else {
                  lVar2 = FUN_1001705e9(lVar3);
                  lVar10 = FUN_100170dbb();
                  if (lVar2 != lVar10) {
                    uVar9 = 0;
                    goto LAB_100440bb1;
                  }
                  puVar7 = (undefined1 *)FUN_100170f3b(lVar3);
                  uVar8 = FUN_100170ef7(lVar3);
                  FUN_1001b7b34(local_58,puVar7,uVar8);
                  FUN_1001b80b2(local_38,local_58);
                }
                FUN_1001b7a50(local_58);
                uVar9 = CONCAT71((int7)((ulong)puVar7 >> 8),1);
                goto LAB_100440bb1;
              }
            }
          }
          else {
            lVar5 = FUN_1001705e9(lVar4);
            lVar6 = FUN_100173434();
            if (((local_40 != 0) && (lVar5 == lVar6)) &&
               (cVar1 = FUN_100170633(lVar4,local_40), cVar1 != '\0')) goto LAB_100440b81;
          }
        }
        FUN_10017060f(0);
        FUN_10017060f(lVar4);
      }
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
  }
  uVar9 = 0;
  lVar4 = 0;
  lVar3 = 0;
LAB_100440bb1:
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar3);
  return uVar9 & 0xffffffff;
}

