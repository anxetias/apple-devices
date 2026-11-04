// rea decompile_all
// name: _AMAuthInstallApImg4CreatePayloadWithProperties
// address: 0x279d38
// body: available
// range: 0x279d38-0x27a07d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallApImg4CreatePayloadWithProperties
          (char *param_1,char *param_2,long param_3,long param_4,long param_5,long param_6,
          undefined8 *param_7)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_3c;
  long local_38;
  
  local_3c = 0;
  local_48 = 0;
  if ((((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (param_3 == 0)) ||
     ((param_7 == (undefined8 *)0x0 || (sVar3 = _strlen(param_1), sVar3 != 4)))) {
    lVar4 = 0;
    lVar7 = 0;
    uStack_60 = 1;
    goto LAB_00279f73;
  }
  lVar4 = _DEREncoderCreate(0);
  if (lVar4 == 0) {
    lVar4 = 0;
    uStack_60 = 2;
    lVar7 = 0;
    goto LAB_00279f73;
  }
  local_38 = _DEREncoderCreate(0);
  if (local_38 == 0) {
    lVar7 = 0;
LAB_0027a009:
    uStack_60 = 2;
    goto LAB_00279f73;
  }
  iVar1 = _DEREncoderAddData(lVar4,0,0x16,
                             &_AMAuthInstallApImg4CreatePayloadWithProperties_img4payloadTag,4,0);
  if (iVar1 == 0) {
    iVar1 = _DEREncoderAddData(lVar4,0,0x16,param_1,4,0);
    if (iVar1 != 0) {
      pcVar6 = "failed to add payload type to DER file";
      goto LAB_0027a04d;
    }
    sVar3 = _strlen(param_2);
    iVar1 = _DEREncoderAddData(lVar4,0,0x16,param_2,sVar3 & 0xffffffff,0);
    if (iVar1 != 0) {
      pcVar6 = "failed to add payload version to DER file";
      goto LAB_0027a04d;
    }
    uVar5 = _CFDataGetBytePtr(param_3);
    uVar2 = _CFDataGetLength(param_3);
    iVar1 = _DEREncoderAddDataNoCopy(lVar4,0,4,uVar5,uVar2,0);
    if (iVar1 != 0) {
      pcVar6 = "failed to add payload data to DER file";
      goto LAB_0027a04d;
    }
    if (param_4 != 0) {
      uVar5 = _CFDataGetBytePtr(param_4);
      uVar2 = _CFDataGetLength(param_4);
      iVar1 = _DEREncoderAddData(lVar4,0,4,uVar5,uVar2,0);
      if (iVar1 != 0) {
        pcVar6 = "failed to add payloadKeybag to DER file";
        goto LAB_0027a04d;
      }
    }
    if (param_5 != 0) {
      uVar5 = _CFDataGetBytePtr(param_5);
      uVar2 = _CFDataGetLength(param_5);
      iVar1 = _DEREncoderAddData(lVar4,0,0x10,uVar5,uVar2,1);
      if (iVar1 != 0) {
        pcVar6 = "failed to add payloadCompression to DER file";
        goto LAB_0027a04d;
      }
    }
    if (param_6 == 0) {
LAB_00279f0d:
      lVar7 = local_38;
      iVar1 = _DEREncoderAddDataFromEncoderNoCopy(lVar4,local_38,0,0x10,1);
      if (iVar1 == 0) {
        iVar1 = _DEREncoderCreateEncodedBuffer(lVar7,&local_48,&local_3c);
        uStack_60 = 2;
        if (iVar1 == 0) {
          uVar5 = _CFDataCreateWithBytesNoCopy
                            (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_48,local_3c,
                             *(undefined8 *)PTR__kCFAllocatorMalloc_004410f0);
          *param_7 = uVar5;
          uStack_60 = 0;
        }
        else {
          _AMAuthInstallLog(3,"AMAuthInstallApImg4CreatePayloadWithProperties",
                            "failed to create DER encoded buffer: sequenceEncoder");
        }
        goto LAB_00279f73;
      }
      _AMAuthInstallLog(3,"AMAuthInstallApImg4CreatePayloadWithProperties",
                        "failed to add payload to sequence");
      goto LAB_0027a009;
    }
    uVar5 = _CFDataGetBytePtr(param_6);
    uVar2 = _CFDataGetLength(param_6);
    iVar1 = _DEREncoderAddData(lVar4,2,0,uVar5,uVar2,1);
    if (iVar1 == 0) goto LAB_00279f0d;
    _AMAuthInstallLog(3,"AMAuthInstallApImg4CreatePayloadWithProperties",
                      "failed to add payload data to DER file");
  }
  else {
    pcVar6 = "failed to add payload tag to DER file";
LAB_0027a04d:
    _AMAuthInstallLog(3,"AMAuthInstallApImg4CreatePayloadWithProperties",pcVar6);
  }
  uStack_60 = 2;
  lVar7 = local_38;
LAB_00279f73:
  _DEREncoderDestroy(lVar4);
  _DEREncoderDestroy(lVar7);
  return uStack_60;
}

