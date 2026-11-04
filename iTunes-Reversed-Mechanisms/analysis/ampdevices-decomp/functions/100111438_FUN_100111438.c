// name: FUN_100111438
// address: 100111438

undefined8 FUN_100111438(uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint uVar5;
  bool bVar6;
  
  uVar2 = param_2 - 1;
  if ((param_2 & uVar2) == 0) {
    uVar5 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> uVar5 == 0; uVar5 = uVar5 - 1) {
      }
    }
    if (uVar2 == 0) {
      uVar5 = 0x3f;
    }
    uVar2 = 0x20 - (uVar5 ^ 0x1f);
    *param_1 = uVar2;
    uVar3 = _vDSP_create_fftsetup(uVar2,0);
    *(undefined8 *)(param_1 + 2) = uVar3;
    puVar4 = PTR__vDSP_fft_zop_10082b5c8;
  }
  else {
    bVar6 = param_2 == (param_2 / 5) * 5;
    if (bVar6) {
      param_2 = param_2 / 5;
    }
    uVar2 = param_2 / 3;
    bVar1 = bVar6 * '\x02' + 1;
    if (0x55555555 < param_2 * -0x55555555) {
      uVar2 = param_2;
      bVar1 = bVar6 * '\x02';
    }
    uVar5 = uVar2 - 1;
    if ((uVar2 & uVar5) != 0) {
      return 0x73697a65;
    }
    if (bVar1 == 3) {
      return 0x73697a65;
    }
    uVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar2 == 0; uVar2 = uVar2 - 1) {
      }
    }
    if (uVar5 == 0) {
      uVar2 = 0x3f;
    }
    *param_1 = 0x20 - (uVar2 ^ 0x1f) | (uint)bVar1 << 0x18;
    uVar2 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar2 == 0; uVar2 = uVar2 - 1) {
      }
    }
    if (uVar5 == 0) {
      uVar2 = 0x3f;
    }
    uVar3 = _vDSP_create_fftsetup(0x20 - (uVar2 ^ 0x1f),bVar1);
    *(undefined8 *)(param_1 + 2) = uVar3;
    puVar4 = PTR__vDSP_fft3_zop_10082b5b8;
    if (bVar1 == 2) {
      puVar4 = PTR__vDSP_fft5_zop_10082b5c0;
    }
  }
  *(undefined **)(param_1 + 4) = puVar4;
  return 0;
}

