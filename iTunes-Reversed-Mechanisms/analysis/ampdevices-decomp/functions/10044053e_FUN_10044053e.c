// name: FUN_10044053e
// address: 10044053e

ulong FUN_10044053e(long param_1,uint *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint local_34;
  
  uVar6 = 0;
  if (*(long *)(param_1 + 0x4a8) == 0) {
    lVar8 = 0;
    uVar9 = 0;
LAB_100440663:
    FUN_10017060f(lVar8);
    if (param_2 == (uint *)0x0) goto LAB_100440673;
  }
  else {
    lVar3 = _AVCFPlayerItemGetStatus(*(long *)(param_1 + 0x4a8),0);
    lVar8 = 0;
    uVar9 = 0;
    uVar6 = 0;
    if (lVar3 != 1) goto LAB_100440663;
    if (param_2 == (uint *)0x0) {
      FUN_10017060f(0);
      uVar9 = 1;
      goto LAB_100440673;
    }
    lVar8 = _AVCFPlayerItemCopyTracks(*(undefined8 *)(param_1 + 0x4a8));
    if (lVar8 == 0) {
      FUN_10017060f(0);
    }
    else {
      lVar3 = FUN_10017076e(lVar8);
      if (0 < lVar3) {
        uVar1 = *(undefined8 *)PTR__AVCFMediaCharacteristicVisual_10082b220;
        lVar7 = 0;
        uVar6 = 0;
        do {
          lVar4 = FUN_100170853(lVar8,lVar7);
          if ((lVar4 != 0) && (lVar5 = _AVCFPlayerItemTrackCopyAssetTrack(lVar4), lVar5 != 0)) {
            cVar2 = _AVCFPlayerItemTrackIsEnabled(lVar4);
            if (cVar2 != '\0') {
              cVar2 = _AVCFAssetTrackHasMediaCharacteristic(lVar5,uVar1);
              uVar6 = uVar6 | cVar2 != '\0';
            }
            local_34 = 0;
            FUN_100440938(lVar5,&local_34);
            uVar6 = uVar6 | local_34;
            FUN_10017060f(lVar5);
          }
          lVar7 = lVar7 + 1;
        } while (lVar3 != lVar7);
        uVar9 = CONCAT71((int7)((ulong)lVar3 >> 8),1);
        goto LAB_100440663;
      }
      FUN_10017060f(lVar8);
    }
    uVar6 = 0;
    uVar9 = 1;
  }
  *param_2 = uVar6;
LAB_100440673:
  return uVar9 & 0xffffffff;
}

