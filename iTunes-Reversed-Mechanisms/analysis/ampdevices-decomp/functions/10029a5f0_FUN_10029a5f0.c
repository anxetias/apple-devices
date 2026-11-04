// name: FUN_10029a5f0
// address: 10029a5f0

undefined8 FUN_10029a5f0(undefined8 param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined1 local_60 [16];
  ulong local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  
  FUN_1001b7a44();
  local_50 = param_2;
  local_48 = param_1;
  FUN_1001bb78a(local_40,"{ 0x%0.16llx",param_2);
  FUN_1001b80b2(param_1,local_40);
  FUN_1001b7a50(local_40);
  if (local_50 == 0) {
    FUN_1001b7b04(local_40," <none>");
    FUN_1001bbcfe(param_1,local_40);
    FUN_1001b7a50(local_40);
  }
  else {
    uVar10 = 1;
    lVar9 = 0;
    uVar7 = 0;
    do {
      if ((local_50 & uVar10) != 0) {
        uVar7 = uVar7 + 1;
        if (1 < uVar7) {
          if ((uVar7 & 7) == 0) {
            FUN_1001b7b04(local_40,"\n");
            FUN_1001bbcfe(local_48,local_40);
          }
          else {
            FUN_1001b7b04(local_40,", ");
            FUN_1001bbcfe(local_48,local_40);
          }
          FUN_1001b7a50(local_40);
        }
        if ((DAT_1008b5bf8 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_1008b5bf8), iVar2 != 0)) {
          FUN_10029a91a(&DAT_100845350);
          ___cxa_atexit(FUN_10029a910,&DAT_1008b5bd0,0x100000000);
          ___cxa_guard_release(&DAT_1008b5bf8);
        }
        if (DAT_1008b5bd8 != 0) {
          uVar5 = DAT_1008b5bd8 - (DAT_1008b5bd8 >> 1 & 0x5555555555555555);
          uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
          uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar5 >> 0x38 < 2) {
            uVar6 = DAT_1008b5bd8 - 1 & uVar10;
          }
          else {
            uVar6 = uVar10;
            if (DAT_1008b5bd8 <= uVar10) {
              uVar6 = uVar10 % DAT_1008b5bd8;
            }
          }
          plVar8 = *(long **)(DAT_1008b5bd0 + uVar6 * 8);
          if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
            do {
              uVar3 = plVar8[1];
              if (uVar3 == uVar10) {
                if (plVar8[2] == uVar10) {
                  FUN_1001b7b04(local_40,plVar8[3]);
                  goto LAB_10029a7a6;
                }
              }
              else {
                if ((byte)(uVar5 >> 0x38) < 2) {
                  uVar3 = uVar3 & DAT_1008b5bd8 - 1;
                }
                else if (DAT_1008b5bd8 <= uVar3) {
                  uVar3 = uVar3 % DAT_1008b5bd8;
                }
                if (uVar3 != uVar6) break;
              }
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
        }
        FUN_1001b7a44(local_40);
LAB_10029a7a6:
        cVar1 = FUN_1001b8428(local_40);
        if (cVar1 == '\0') {
          uVar4 = FUN_1001b8336(local_40);
          FUN_1001bb78a(local_60," %S",uVar4);
          FUN_1001bbcfe(local_48,local_60);
          FUN_1001b7a50(local_60);
        }
        FUN_1001b7a50(local_40);
      }
      uVar10 = uVar10 * 2;
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x40);
  }
  FUN_1001b7b04(local_40," }");
  uVar4 = local_48;
  FUN_1001bbcfe(local_48,local_40);
  FUN_1001b7a50(local_40);
  return uVar4;
}

