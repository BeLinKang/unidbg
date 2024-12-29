/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_github_unidbg_arm_backend_hypervisor_Hypervisor */

#ifndef _Included_com_github_unidbg_arm_backend_hypervisor_Hypervisor
#define _Included_com_github_unidbg_arm_backend_hypervisor_Hypervisor
#ifdef __cplusplus
extern "C" {
#endif
#undef com_github_unidbg_arm_backend_hypervisor_Hypervisor_REG_VBAR_EL1
#define com_github_unidbg_arm_backend_hypervisor_Hypervisor_REG_VBAR_EL1 4026531840LL
#undef com_github_unidbg_arm_backend_hypervisor_Hypervisor_PSTATE_00024SS
#define com_github_unidbg_arm_backend_hypervisor_Hypervisor_PSTATE_00024SS 2097152LL
/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    testVcpu
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_testVcpu
  (JNIEnv *, jclass);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    getPageSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_getPageSize
  (JNIEnv *, jclass);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    setHypervisorCallback
 * Signature: (JLcom/github/unidbg/arm/backend/hypervisor/HypervisorCallback;)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_setHypervisorCallback
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    nativeInitialize
 * Signature: (Z)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_nativeInitialize
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    nativeDestroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_nativeDestroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    mem_unmap
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_mem_1unmap
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    mem_map
 * Signature: (JJJI)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_mem_1map
  (JNIEnv *, jclass, jlong, jlong, jlong, jint);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    mem_protect
 * Signature: (JJJI)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_mem_1protect
  (JNIEnv *, jclass, jlong, jlong, jlong, jint);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_write
 * Signature: (JIJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1write
  (JNIEnv *, jclass, jlong, jint, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_set_sp64
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1set_1sp64
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_set_tpidr_el0
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1set_1tpidr_1el0
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_set_tpidrro_el0
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1set_1tpidrro_1el0
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_set_nzcv
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1set_1nzcv
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_set_cpacr_el1
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1set_1cpacr_1el1
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_set_elr_el1
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1set_1elr_1el1
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_read_vector
 * Signature: (JI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1read_1vector
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_set_vector
 * Signature: (JI[B)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1set_1vector
  (JNIEnv *, jclass, jlong, jint, jbyteArray);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_set_spsr_el1
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1set_1spsr_1el1
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    mem_write
 * Signature: (JJ[B)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_mem_1write
  (JNIEnv *, jclass, jlong, jlong, jbyteArray);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    mem_read
 * Signature: (JJI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_mem_1read
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_read
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1read
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_read_sp64
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1read_1sp64
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_read_pc64
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1read_1pc64
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_read_nzcv
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1read_1nzcv
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    reg_read_cpacr_el1
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_reg_1read_1cpacr_1el1
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    emu_start
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_emu_1start
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    emu_stop
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_emu_1stop
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    context_alloc
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_context_1alloc
  (JNIEnv *, jclass);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    context_save
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_context_1save
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    context_restore
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_context_1restore
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    getBRPs
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_getBRPs
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    getWRPs
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_getWRPs
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    getCpuContext
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_getCpuContext
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    getVCpus
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_getVCpus
  (JNIEnv *, jclass);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    enable_single_step
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_enable_1single_1step
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    install_hw_breakpoint
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_install_1hw_1breakpoint
  (JNIEnv *, jclass, jlong, jint, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    disable_hw_breakpoint
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_disable_1hw_1breakpoint
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_github_unidbg_arm_backend_hypervisor_Hypervisor
 * Method:    install_watchpoint
 * Signature: (JIJJ)V
 */
JNIEXPORT void JNICALL Java_com_github_unidbg_arm_backend_hypervisor_Hypervisor_install_1watchpoint
  (JNIEnv *, jclass, jlong, jint, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
