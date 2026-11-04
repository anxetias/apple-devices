// rea decompile_all
// name: _AMDeviceGetLocalOrRemoteOffsetToResume
// address: 0x1535d7
// body: available
// range: 0x1535d7-0x153d70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x153d6c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDeviceGetLocalOrRemoteOffsetToResume
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  char *pcVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long local_918;
  long *local_910;
  undefined8 local_908;
  CC_SHA1_CTX local_900 [4];
  char local_478 [1024];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  undefined4 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  cVar2 = _CFStringGetCString(param_3,local_478,0x400,0x8000100);
  if (cVar2 == '\0') {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar11 = "Could not convert local_path string \'%@\' to path.";
  }
  else {
    cVar2 = _CFStringGetCString(param_4,local_900[0].data + 0x1b,0x400,0x8000100);
    if (cVar2 != '\0') {
      iVar3 = _open(local_478,0);
      if (iVar3 == -1) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar5 = _md_log_log;
        piVar10 = ___error();
        pcVar11 = _strerror(*piVar10);
        __os_log_internal(0,uVar5,1,"Could not open %s: %s",local_478,pcVar11);
        lVar7 = 0;
        goto LAB_001537e5;
      }
      iVar4 = _fstat_INODE64(iVar3,&local_918);
      if (iVar4 == -1) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar5 = _md_log_log;
        piVar10 = ___error();
        pcVar11 = _strerror(*piVar10);
        __os_log_internal(0,uVar5,1,"Could not fstat %s: %s",local_478,pcVar11);
        _close(iVar3);
        lVar7 = 0;
        goto LAB_001537e5;
      }
      local_900[0].data[0x17] = local_900[0].data[0xb];
      local_900[0].data[0x18] = local_900[0].data[0xc];
      _close(iVar3);
      uVar5 = _CFGetAllocator(param_1);
      lVar6 = _CFStringCreateWithCString(uVar5,local_900[0].data + 0x1b,0x8000100);
      if (lVar6 != 0) {
        uVar5 = _CFGetAllocator(param_1);
        lVar7 = _AFCOperationCreateGetFileInfo(uVar5,lVar6,0);
        if (lVar7 != 0) {
          iVar3 = _AFCConnectionProcessOperation(0,param_1,lVar7);
          if (((iVar3 == 0) && (iVar3 = _AFCOperationGetResultStatus(lVar7), iVar3 == 0)) &&
             (lVar8 = _AFCOperationGetResultObject(lVar7), lVar8 != 0)) {
            local_900[0].data._100_8_ = lVar6;
            lVar6 = _CFGetTypeID(lVar8);
            lVar9 = _CFDictionaryGetTypeID();
            param_3 = lVar8;
            if ((lVar6 == lVar9) && (lVar8 = _CFDictionaryGetValue(lVar8,&cf_st_size), lVar8 != 0))
            {
              lVar6 = _CFGetTypeID(lVar8);
              lVar9 = _CFNumberGetTypeID();
              if (lVar6 == lVar9) {
                cVar2 = _CFNumberGetValue(lVar8,4,&local_918);
LAB_00153928:
                lVar6 = local_900[0].data._100_8_;
                param_3 = lVar8;
                if (cVar2 == '\0') goto LAB_00153c65;
                bVar1 = true;
                param_3 = local_918;
                goto LAB_0015394b;
              }
              lVar6 = _CFGetTypeID(lVar8);
              lVar9 = _CFStringGetTypeID();
              param_3 = lVar8;
              if ((lVar6 == lVar9) && (lVar6 = _CFNumberFormatterCreate(0,0,0), lVar6 != 0)) {
                lVar8 = _CFNumberFormatterCreateNumberFromString(0,lVar6,lVar8,0,1);
                _CFRelease(lVar6);
                param_3 = lVar8;
                if (lVar8 != 0) {
                  cVar2 = _CFNumberGetValue(lVar8,4,&local_918);
                  _CFRelease(lVar8);
                  goto LAB_00153928;
                }
              }
            }
            bVar1 = false;
            lVar6 = local_900[0].data._100_8_;
          }
          else {
LAB_00153c65:
            bVar1 = false;
          }
LAB_0015394b:
          _CFRelease(lVar6);
          _CFRelease(lVar7);
          if (!bVar1) goto LAB_00153cc5;
          lVar6 = param_3;
          if ((long)local_900[0].data._92_8_ < param_3) {
            lVar6 = local_900[0].data._92_8_;
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,2,"ls: %lli; rs: %lli; lowest: %lli",
                            local_900[0].data._92_8_,param_3,lVar6);
          lVar7 = 0;
          if (lVar6 < 1) goto LAB_001537e5;
          local_48 = 0;
          local_58 = (undefined1  [16])0x0;
          local_78 = (undefined1  [16])0x0;
          local_68 = 0;
          local_900[0].data._100_8_ = lVar6;
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,2,"running local SHA1(%s)",local_478);
          local_918 = 0;
          local_908 = 0x7800000000;
          local_910 = &local_918;
          _CC_SHA1_Init(local_900);
          cVar2 = _read_file(local_478);
          _CC_SHA1_Final(local_58,(CC_SHA1_CTX *)(local_910 + 3));
          __Block_object_dispose(&local_918,8);
          lVar7 = 0;
          if (cVar2 == '\0') goto LAB_001537e5;
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar5 = local_900[0].data._100_8_;
          __os_log_internal(0,_md_log_log,2,"local SHA1(%s): %016llx ...",local_478,local_58._0_8_);
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,2,"running remote SHA1(%s)",local_900[0].data + 0x1b);
          uVar12 = _CFGetAllocator(param_1);
          lVar6 = _CFStringCreateWithCString(uVar12,local_900[0].data + 0x1b,0x8000100);
          lVar7 = 0;
          if (lVar6 == 0) goto LAB_001537e5;
          uVar12 = _CFGetAllocator(param_1);
          lVar7 = _AFCOperationCreateGetFileHashWithRange(uVar12,lVar6,0,uVar5,0);
          if (lVar7 != 0) {
            iVar3 = _AFCConnectionProcessOperation(0,param_1,lVar7);
            if (((iVar3 == 0) && (iVar3 = _AFCOperationGetResultStatus(lVar7), iVar3 == 0)) &&
               (lVar8 = _AFCOperationGetResultObject(lVar7), lVar8 != 0)) {
              lVar9 = _CFGetTypeID(lVar8);
              lVar13 = _CFDataGetTypeID();
              if ((lVar9 == lVar13) && (lVar9 = _CFDataGetLength(lVar8), lVar9 == 0x14)) {
                _CFDataGetBytes(lVar8,0,0x14,local_78);
                _CFRelease(lVar6);
                _CFRelease(lVar7);
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                __os_log_internal(0,_md_log_log,2,"remote SHA1(%s): %016llx...",
                                  local_900[0].data + 0x1b,local_78._0_8_);
                auVar15[0] = -((char)local_68 == (char)local_48);
                auVar15[1] = -((char)((uint)local_68 >> 8) == (char)((uint)local_48 >> 8));
                auVar15[2] = -((char)((uint)local_68 >> 0x10) == (char)((uint)local_48 >> 0x10));
                auVar15[3] = -((char)((uint)local_68 >> 0x18) == (char)((uint)local_48 >> 0x18));
                auVar15[4] = 0xff;
                auVar15[5] = 0xff;
                auVar15[6] = 0xff;
                auVar15[7] = 0xff;
                auVar15[8] = 0xff;
                auVar15[9] = 0xff;
                auVar15[10] = 0xff;
                auVar15[0xb] = 0xff;
                auVar15[0xc] = 0xff;
                auVar15[0xd] = 0xff;
                auVar15[0xe] = 0xff;
                auVar15[0xf] = 0xff;
                auVar14[0] = -(local_58[0] == local_78[0]);
                auVar14[1] = -(local_58[1] == local_78[1]);
                auVar14[2] = -(local_58[2] == local_78[2]);
                auVar14[3] = -(local_58[3] == local_78[3]);
                auVar14[4] = -(local_58[4] == local_78[4]);
                auVar14[5] = -(local_58[5] == local_78[5]);
                auVar14[6] = -(local_58[6] == local_78[6]);
                auVar14[7] = -(local_58[7] == local_78[7]);
                auVar14[8] = -(local_58[8] == local_78[8]);
                auVar14[9] = -(local_58[9] == local_78[9]);
                auVar14[10] = -(local_58[10] == local_78[10]);
                auVar14[0xb] = -(local_58[0xb] == local_78[0xb]);
                auVar14[0xc] = -(local_58[0xc] == local_78[0xc]);
                auVar14[0xd] = -(local_58[0xd] == local_78[0xd]);
                auVar14[0xe] = -(local_58[0xe] == local_78[0xe]);
                auVar14[0xf] = -(local_58[0xf] == local_78[0xf]);
                auVar14 = auVar14 & auVar15;
                lVar7 = 0;
                if ((ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar14[0xf] >> 7) << 0xf) == 0xffff) {
                  lVar7 = uVar5;
                }
                goto LAB_001537e5;
              }
            }
            _CFRelease(lVar6);
            lVar6 = lVar7;
          }
        }
        _CFRelease(lVar6);
      }
LAB_00153cc5:
      lVar7 = 0;
      goto LAB_001537e5;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar11 = "Could not convert remote_path string \'%@\' to path.";
    param_3 = param_4;
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar11,param_3);
  lVar7 = 0;
LAB_001537e5:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar7;
}

