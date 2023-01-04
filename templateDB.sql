-- phpMyAdmin SQL Dump
-- version 4.9.5deb2
-- https://www.phpmyadmin.net/
--
-- Host: localhost:3306
-- Generation Time: Dec 28, 2022 at 11:46 AM
-- Server version: 8.0.31-0ubuntu0.20.04.1
-- PHP Version: 7.4.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `clonedSites`
--

-- --------------------------------------------------------

--
-- Table structure for table `cachedPages`
--

CREATE TABLE `cachedPages` (
 `id` int NOT NULL,
 `initiatingUrl` varchar(650) NOT NULL,
 `requestUrl` varchar(750) NOT NULL,
 `headFilePath` text NOT NULL,
 `contFilePath` text NOT NULL,
 `updateFilePath` text,
 `creationDate` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
 `type` varchar(128) DEFAULT NULL,
 `slimWebLabel` varchar(256) DEFAULT NULL,
 `BertLabel` varchar(256) DEFAULT NULL,
 `JSCleanerLabel` varchar(256) DEFAULT NULL,
 `JSAnalyzerLabel` varchar(256) DEFAULT NULL,
 `delay` int DEFAULT NULL,
 `total_functions` bigint DEFAULT NULL,
 `updated_functions` bigint DEFAULT NULL,
 `total_size` bigint DEFAULT NULL,
 `updated_size` bigint DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `cachedPages`
--
ALTER TABLE `cachedPages`
 ADD UNIQUE KEY `id` (`id`),
 ADD UNIQUE KEY `initiatingUrl` (`initiatingUrl`(300),`requestUrl`(300)),
 ADD KEY `initiatingUrl_2` (`initiatingUrl`),
 ADD KEY `requestUrl` (`requestUrl`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `cachedPages`
--
ALTER TABLE `cachedPages`
 MODIFY `id` int NOT NULL AUTO_INCREMENT;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
