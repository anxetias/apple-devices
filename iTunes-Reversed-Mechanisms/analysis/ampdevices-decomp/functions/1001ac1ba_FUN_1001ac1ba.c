// name: FUN_1001ac1ba
// address: 1001ac1ba

ulong FUN_1001ac1ba(long *param_1,long param_2)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  undefined1 local_60 [8];
  long local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  if (*param_1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar4 = _CFURLCopyHostName();
    FUN_1001aaedc(&local_38,uVar4);
    if (local_38 == 0) {
LAB_1001ac3a3:
      uVar8 = 0;
    }
    else {
      lVar5 = _CFStringGetLength();
      if (0 < lVar5) {
        lVar7 = 0;
        do {
          uVar2 = _CFStringGetCharacterAtIndex(local_38,lVar7);
          if (uVar2 < 0x21) goto LAB_1001ac3a3;
          lVar7 = lVar7 + 1;
        } while (lVar5 != lVar7);
      }
      local_50 = 0;
      local_58 = param_2;
      FUN_1001aa318(&local_48);
      lVar7 = FUN_1001a7bfa(param_2);
      FUN_1001aa318(local_60);
      uVar8 = CONCAT71((int7)((ulong)param_2 >> 8),lVar7 != local_50 || param_2 != local_58);
      if (lVar7 != local_50 || param_2 != local_58) {
        do {
          FUN_100527694(&local_40);
          FUN_1001aaadc(&local_48,&local_40);
          FUN_1001ab006(&local_40);
          sVar3 = _CFStringGetCharacterAtIndex(local_48,0);
          if (sVar3 == 0x2a) {
            lVar6 = FUN_1001737f8(local_48);
            if (lVar6 <= lVar5) {
              uVar4 = _CFStringCreateWithSubstring(DAT_1008c4d98,local_48,1,lVar6 + -1);
              FUN_1001aaedc(&local_40,uVar4);
              if ((local_40 != 0) &&
                 (cVar1 = _CFStringFindWithOptions(local_38,local_40,0,lVar5,0xd,0), cVar1 != '\0'))
              {
                FUN_1001ab006(&local_40);
                break;
              }
              FUN_1001ab006(&local_40);
            }
          }
          else if (sVar3 == 0x2e) {
            cVar1 = _CFStringFindWithOptions(local_38,local_48,0,lVar5,0xd,0);
            if (cVar1 != '\0') break;
          }
          else {
            lVar6 = _CFStringCompare(local_38,local_48,1);
            if (lVar6 == 0) break;
          }
          local_50 = local_50 + 1;
          bVar9 = lVar7 != local_50 || param_2 != local_58;
          uVar8 = CONCAT71((int7)(uVar8 >> 8),bVar9);
        } while (bVar9);
      }
      FUN_1001ab006(local_60);
      FUN_1001ab006(&local_48);
    }
    FUN_1001ab006(&local_38);
  }
  return uVar8 & 0xffffff01;
}

