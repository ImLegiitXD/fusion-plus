#pragma once
#include "java/java.h"

struct StrayCache {

	inline static bool initialized;

	// ENTITY CLASS
	inline static jclass entity_class;
	inline static jmethodID entity_getName;
	inline static jmethodID entity_isSneaking;
	inline static jfieldID entity_posX;
	inline static jfieldID entity_posY;
	inline static jfieldID entity_posZ;
	inline static jfieldID entity_lastTickPosX;
	inline static jfieldID entity_lastTickPosY;
	inline static jfieldID entity_lastTickPosZ;
	inline static jfieldID entity_width;
	inline static jfieldID entity_height;
	inline static jfieldID entity_distanceWalkedModified;
	inline static jfieldID entity_prevDistanceWalkedModified;
	inline static jfieldID entity_rotationYaw;
	inline static jfieldID entity_rotationPitch;
	inline static jfieldID entity_prevRotationYaw;
	inline static jfieldID entity_prevRotationPitch;
	inline static jfieldID entity_boundingBox;
	inline static jfieldID entity_motionX;
	inline static jfieldID entity_motionY;
	inline static jfieldID entity_motionZ;
	inline static jfieldID entity_hurtResistantTime;

	// ENTITY LIVING BASE CLASS
	inline static jclass entityLivingBase_class;
	inline static jmethodID entityLivingBase_getHealth;
	inline static jmethodID entityLivingBase_getMaxHealth;
	inline static jmethodID entityLivingBase_canEntityBeSeen;


	// AXIS ALIGNED BB CLASS
	inline static jclass axisAlignedBB_class;
	inline static jfieldID axisAlignedBB_minX;
	inline static jfieldID axisAlignedBB_minY;
	inline static jfieldID axisAlignedBB_minZ;
	inline static jfieldID axisAlignedBB_maxX;
	inline static jfieldID axisAlignedBB_maxY;
	inline static jfieldID axisAlignedBB_maxZ;

	// MOVING OBJECT POSITION CLASS
	inline static jclass movingObjectPosition_class;
	inline static jfieldID movingObjectPosition_hitVec;
	inline static jfieldID movingObjectPosition_typeOfHit;
	inline static jfieldID movingObjectPosition_entityHit;

	inline static jclass vec3_class;
	inline static jfieldID vec3_xCoord;
	inline static jfieldID vec3_yCoord;
	inline static jfieldID vec3_zCoord;

	inline static jclass inventoryPlayer_class;
	inline static jmethodID inventoryPlayer_getCurrentItem;
	inline static jfieldID inventoryPlayer_mainInventory;
	inline static jfieldID inventoryPlayer_armorInventory;

	inline static jclass itemStack_class;
	inline static jmethodID itemStack_getItem;

	inline static jclass item_class;
	inline static jmethodID item_getUnlocalizedName;

	// BLOCK CLASS
	inline static jclass block_class;
	inline static jmethodID block_getIdFromBlock;

	// IBLOCK STATE CLASS
	inline static jclass iBlockState_class;
	inline static jmethodID iBlockState_getBlock;

	// BLOCK POS CLASS
	inline static jclass blockPos_class;
	inline static jmethodID blockPos_constructorInt;
	inline static jmethodID blockPos_constructorFloat;

	static void Initialize() {
		Java::AssignClass("net.minecraft.entity.Entity", entity_class);
		entity_getName = Java::Env->GetMethodID(entity_class, "getName", "()Ljava/lang/String;");
		entity_isSneaking = Java::Env->GetMethodID(entity_class, "isSneaking", "()Z");
		entity_posX = Java::Env->GetFieldID(entity_class, "posX", "D");
		entity_posY = Java::Env->GetFieldID(entity_class, "posY", "D");
		entity_posZ = Java::Env->GetFieldID(entity_class, "posZ", "D");
		entity_lastTickPosX = Java::Env->GetFieldID(entity_class, "lastTickPosX", "D");
		entity_lastTickPosY = Java::Env->GetFieldID(entity_class, "lastTickPosY", "D");
		entity_lastTickPosZ = Java::Env->GetFieldID(entity_class, "lastTickPosZ", "D");
		entity_width = Java::Env->GetFieldID(entity_class, "width", "F");
		entity_height = Java::Env->GetFieldID(entity_class, "height", "F");
		entity_distanceWalkedModified = Java::Env->GetFieldID(entity_class, "distanceWalkedModified", "F");
		entity_prevDistanceWalkedModified = Java::Env->GetFieldID(entity_class, "prevDistanceWalkedModified", "F");
		entity_rotationYaw = Java::Env->GetFieldID(entity_class, "rotationYaw", "F");
		entity_rotationPitch = Java::Env->GetFieldID(entity_class, "rotationPitch", "F");
		entity_prevRotationYaw = Java::Env->GetFieldID(entity_class, "prevRotationYaw", "F");
		entity_prevRotationPitch = Java::Env->GetFieldID(entity_class, "prevRotationPitch", "F");
		entity_boundingBox = Java::Env->GetFieldID(entity_class, "boundingBox", "Lnet/minecraft/util/AxisAlignedBB;");
		entity_motionX = Java::Env->GetFieldID(entity_class, "motionX", "D");
		entity_motionY = Java::Env->GetFieldID(entity_class, "motionY", "D");
		entity_motionZ = Java::Env->GetFieldID(entity_class, "motionZ", "D");
		entity_hurtResistantTime = Java::Env->GetFieldID(entity_class, "hurtResistantTime", "I");

		Java::AssignClass("net.minecraft.entity.EntityLivingBase", entityLivingBase_class);
		entityLivingBase_getHealth = Java::Env->GetMethodID(entityLivingBase_class, "getHealth", "()F");
		entityLivingBase_getMaxHealth = Java::Env->GetMethodID(entityLivingBase_class, "getMaxHealth", "()F");
		entityLivingBase_canEntityBeSeen = Java::Env->GetMethodID(entityLivingBase_class, "canEntityBeSeen", "(Lnet/minecraft/entity/Entity;)Z");

		Java::AssignClass("net.minecraft.util.AxisAlignedBB", axisAlignedBB_class);
		axisAlignedBB_minX = Java::Env->GetFieldID(axisAlignedBB_class, "minX", "D");
		axisAlignedBB_minY = Java::Env->GetFieldID(axisAlignedBB_class, "minY", "D");
		axisAlignedBB_minZ = Java::Env->GetFieldID(axisAlignedBB_class, "minZ", "D");
		axisAlignedBB_maxX = Java::Env->GetFieldID(axisAlignedBB_class, "maxX", "D");
		axisAlignedBB_maxY = Java::Env->GetFieldID(axisAlignedBB_class, "maxY", "D");
		axisAlignedBB_maxZ = Java::Env->GetFieldID(axisAlignedBB_class, "maxZ", "D");

		Java::AssignClass("net.minecraft.util.MovingObjectPosition", movingObjectPosition_class);
		movingObjectPosition_hitVec = Java::Env->GetFieldID(movingObjectPosition_class, "hitVec", "Lnet/minecraft/util/Vec3;");
		movingObjectPosition_typeOfHit = Java::Env->GetFieldID(movingObjectPosition_class, "typeOfHit", "Lnet/minecraft/util/MovingObjectPosition$MovingObjectType;");
		movingObjectPosition_entityHit = Java::Env->GetFieldID(movingObjectPosition_class, "entityHit", "Lnet/minecraft/entity/Entity;");

		Java::AssignClass("net.minecraft.util.Vec3", vec3_class);
		vec3_xCoord = Java::Env->GetFieldID(vec3_class, "xCoord", "D");
		vec3_yCoord = Java::Env->GetFieldID(vec3_class, "yCoord", "D");
		vec3_zCoord = Java::Env->GetFieldID(vec3_class, "zCoord", "D");

		Java::AssignClass("net.minecraft.entity.player.InventoryPlayer", inventoryPlayer_class);
		inventoryPlayer_getCurrentItem = Java::Env->GetMethodID(inventoryPlayer_class, "getCurrentItem", "()Lnet/minecraft/item/ItemStack;");
		inventoryPlayer_mainInventory = Java::Env->GetFieldID(inventoryPlayer_class, "mainInventory", "[Lnet/minecraft/item/ItemStack;");
		inventoryPlayer_armorInventory = Java::Env->GetFieldID(inventoryPlayer_class, "armorInventory", "[Lnet/minecraft/item/ItemStack;");

		Java::AssignClass("net.minecraft.item.ItemStack", itemStack_class);
		itemStack_getItem = Java::Env->GetMethodID(itemStack_class, "getItem", "()Lnet/minecraft/item/Item;");

		Java::AssignClass("net.minecraft.item.Item", item_class);
		item_getUnlocalizedName = Java::Env->GetMethodID(item_class, "getUnlocalizedName", "()Ljava/lang/String;");

		Java::AssignClass("net.minecraft.block.Block", block_class);
		block_getIdFromBlock = Java::Env->GetStaticMethodID(block_class, "getIdFromBlock", "(Lnet/minecraft/block/Block;)I");

		Java::AssignClass("net.minecraft.block.state.IBlockState", iBlockState_class);
		iBlockState_getBlock = Java::Env->GetMethodID(iBlockState_class, "getBlock", "()Lnet/minecraft/block/Block;");

		Java::AssignClass("net.minecraft.util.BlockPos", blockPos_class);
		blockPos_constructorInt = Java::Env->GetMethodID(blockPos_class, "<init>", "(III)V");
		blockPos_constructorFloat = Java::Env->GetMethodID(blockPos_class, "<init>", "(FFF)V");

		initialized = true;
	}

	static void DeleteRefs() {
		Java::Env->DeleteLocalRef(entity_class);
		Java::Env->DeleteLocalRef(entityLivingBase_class);
		Java::Env->DeleteLocalRef(axisAlignedBB_class);
		Java::Env->DeleteLocalRef(movingObjectPosition_class);
		Java::Env->DeleteLocalRef(vec3_class);
	}
};